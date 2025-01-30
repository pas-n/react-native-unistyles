type RemapImport = {
    name?: string,
    isDefault: boolean,
    path: string,
    mapTo: string
}

type RemapConfig = {
    path: string,
    imports: Array<RemapImport>
}

export interface UnistylesPluginOptions {
    /**
     * Example: "src" or "apps/mobile"
     * Add this option if some of your components don't have `react-native-unistyles` import.
     * Babel plugin will automatically process all files under this root.
     */
    autoProcessRoot?: string,

    /**
    * Example: ['@codemask/styles']
    * Enable this option if you want to process only files containing specific imports.
    */
    autoProcessImports?: Array<string>,

    /**
     * Example: [{
     *     path: "node_modules/custom-library/components",
     *     imports: [
     *         {
     *             name: "NativeText",
     *             isDefault: false,
     *             path: "react-native/Libraries/Text/TextNativeComponent",
     *             mapTo: "NativeText"
     *         },
     *         {
     *             isDefault: true,
     *             path: "react-native/Libraries/Components/View/ViewNativeComponent",
     *             mapTo: "NativeView"
     *         }
     *     ]
     * }]
     *
     * Will map:
     *      import { NativeText } from "react-native/Libraries/Text/TextNativeComponent"
     *      to Unistyles "NativeText"
     *
     *      import View from "react-native/Libraries/Components/View/ViewNativeComponent"
     *      to Unistyles "NativeView"
     *
     * This is the most powerful way of remapping imports. If 3rd party library uses imports different from `react-native` we can remap them to `react-native-unistyles` factories.
     * Internally we do that for raw RCTView and RCTText components.
     *
     * path -> must be within node_modules folder
     * imports.name is Optional if library used export default
     * imports.mapTo - name of the component from react-native-unistyles/src/components/native
     */
    autoRemapImports?: Array<RemapConfig>,

    /**
    * Example: ['external-library/components']
    * Enable this option to process some 3rd party components under `node_modules`.
    * Under these paths we will replace `react-native` imports with `react-native-unistyles` factories that will borrow components refs [read more](https://www.unistyl.es/v3/other/babel-plugin#3-component-factory-borrowing-ref).
    *
    * Defaults to:
    *
    * ```ts
    * ['react-native-reanimated/src/component', 'react-native-gesture-handler/src/components']
    * ```
    */
    autoProcessPaths?: Array<string>,

    /**
    * In order to list detected dependencies by the Babel plugin you can enable the `debug` flag.
    * It will `console.log` name of the file and component with Unistyles dependencies.
    */
    debug?: boolean,

    /**
    * Only applicable for Unistyles monorepo for
    * path resolution, don't use it!
    */
    isLocal?: boolean
}

export interface UnistylesPluginPass {
    opts: UnistylesPluginOptions
}
