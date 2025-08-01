// Generated by "utils/script_docs_to_cpp.py" from "docs/scripting-api.rst".
template <typename AddDocumentationCallback>
void addDocumentation(AddDocumentationCallback addDocumentation)
{

    addDocumentation("version", "version() -> string", "Returns version string.");
    addDocumentation("help", "help() -> string", "Returns help string.");
    addDocumentation("help", "help(searchString, ...) -> string", "Returns help for matched commands.");
    addDocumentation("show", "show()", "Shows main window.");
    addDocumentation("show", "show(tabName)", "Shows tab.");
    addDocumentation("showAt", "showAt(x, y, [width, height])", "Shows main window with given geometry.");
    addDocumentation("showAt", "showAt()", "Shows main window under mouse cursor.");
    addDocumentation("showAt", "showAt(x, y, width, height, tabName)", "Shows tab with given geometry.");
    addDocumentation("hide", "hide()", "Hides main window.");
    addDocumentation("toggle", "toggle() -> bool", "Shows or hides main window.");
    addDocumentation("menu", "menu()", "Opens context menu.");
    addDocumentation("menu", "menu(tabName, [maxItemCount, [x, y]])", "Shows context menu for given tab.");
    addDocumentation("exit", "exit()", "Exits server.");
    addDocumentation("disable", "disable()", "Disables or enables clipboard content storing.");
    addDocumentation("monitoring", "monitoring() -> bool", "Returns true only if clipboard storing is enabled.");
    addDocumentation("visible", "visible() -> bool", "Returns true only if main window is visible.");
    addDocumentation("focused", "focused() -> bool", "Returns true only if main window has focus.");
    addDocumentation("focusPrevious", "focusPrevious()", "Activates window that was focused before the main window.");
    addDocumentation("preview", "preview([true|false])", "Shows/hides item preview and returns true only if preview was visible.");
    addDocumentation("filter", "filter() -> string", "Returns the current text for filtering items in main window.");
    addDocumentation("filter", "filter(filterText)", "Sets text for filtering items in main window.");
    addDocumentation("ignore", "ignore()", "Ignores current clipboard content (used for automatic commands).");
    addDocumentation("clipboard", "clipboard([mimeType]) -> `ByteArray`", "Returns clipboard data for MIME type (default is text).");
    addDocumentation("selection", "selection([mimeType]) -> `ByteArray`", "Same as `clipboard()` for `Linux mouse selection`_.");
    addDocumentation("hasClipboardFormat", "hasClipboardFormat(mimeType) -> bool", "Returns true only if clipboard contains MIME type.");
    addDocumentation("hasSelectionFormat", "hasSelectionFormat(mimeType) -> bool", "Same as `hasClipboardFormat()` for `Linux mouse selection`_.");
    addDocumentation("isClipboard", "isClipboard() -> bool", "Returns true only in automatic command triggered by clipboard change.");
    addDocumentation("copy", "copy(text)", "Sets clipboard plain text.");
    addDocumentation("copy", "copy(mimeType, data, [mimeType, data]...)", "Sets clipboard data.");
    addDocumentation("copy", "copy(Item)", "Function override with an item argument.");
    addDocumentation("copy", "copy()", "Sends `Ctrl+C` to current window.");
    addDocumentation("copySelection", "copySelection(...)", "Same as `copy()` for `Linux mouse selection`_.");
    addDocumentation("paste", "paste()", "Pastes current clipboard.");
    addDocumentation("tab", "tab() -> array of strings", "Returns tab names.");
    addDocumentation("tab", "tab(tabName)", "Sets current tab for the script.");
    addDocumentation("removeTab", "removeTab(tabName)", "Removes tab.");
    addDocumentation("renameTab", "renameTab(tabName, newTabName)", "Renames tab.");
    addDocumentation("tabIcon", "tabIcon(tabName) -> string", "Returns path to icon for tab.");
    addDocumentation("tabIcon", "tabIcon(tabName, iconPath)", "Sets icon for tab.");
    addDocumentation("unload", "unload([tabNames...]) -> array of strings", "Unload tabs (i.e. items from memory).");
    addDocumentation("forceUnload", "forceUnload([tabNames...])", "Force-unload tabs (i.e. items from memory).");
    addDocumentation("count", "count() -> int", "Returns amount of items in current tab.");
    addDocumentation("select", "select(row)", "Copies item in the row to clipboard.");
    addDocumentation("next", "next()", "Copies next item from current tab to clipboard.");
    addDocumentation("previous", "previous()", "Copies previous item from current tab to clipboard.");
    addDocumentation("add", "add(text|Item...)", "Same as `insert(0, ...)`.");
    addDocumentation("insert", "insert(row, text|Item...)", "Inserts new items to current tab.");
    addDocumentation("remove", "remove(row, ...)", "Removes items in current tab.");
    addDocumentation("move", "move(row)", "Moves selected items to given row in same tab.");
    addDocumentation("edit", "edit([row|text] ...)", "Edits items in the current tab.");
    addDocumentation("editItem", "editItem(row, [mimeType, [data]])", "Edits specific format for the item.");
    addDocumentation("read", "read([mimeType])", "Same as `clipboard()`.");
    addDocumentation("read", "read(mimeType, row, ...) -> `ByteArray`", "Returns concatenated data from items, or clipboard if row is negative.");
    addDocumentation("write", "write(row, mimeType, data, [mimeType, data]...)", "Inserts new item to current tab.");
    addDocumentation("write", "write(row, Item...)", "Function override with one or more item arguments.");
    addDocumentation("write", "write(row, Item[])", "Function override with item list argument.");
    addDocumentation("change", "change(row, mimeType, data, [mimeType, data]...)", "Changes data in item in current tab.");
    addDocumentation("change", "change(row, Item...)", "Function override with one or more item arguments.");
    addDocumentation("change", "change(row, Item[])", "Function override with item list argument.");
    addDocumentation("separator", "separator() -> string", "Returns item separator (used when concatenating item data).");
    addDocumentation("separator", "separator(separator)", "Sets item separator for concatenating item data.");
    addDocumentation("action", "action()", "Opens action dialog.");
    addDocumentation("action", "action([rows, ...], command, [outputItemSeparator])", "Runs command for items in current tab.");
    addDocumentation("popup", "popup(title, message, [time=8000])", "Shows popup message for given time in milliseconds.");
    addDocumentation("notification", "notification(...)", "Shows popup message with icon and buttons.");
    addDocumentation("exportTab", "exportTab(fileName)", "Exports current tab into file.");
    addDocumentation("importTab", "importTab(fileName)", "Imports items from file to a new tab.");
    addDocumentation("exportData", "exportData(fileName)", "Exports all tabs and configuration into file.");
    addDocumentation("importData", "importData(fileName)", "Imports all tabs and configuration from file.");
    addDocumentation("config", "config() -> string", "Returns help with list of available application options.");
    addDocumentation("config", "config(optionName) -> string", "Returns value of given application option.");
    addDocumentation("config", "config(optionName, value) -> string", "Sets application option and returns new value.");
    addDocumentation("config", "config(optionName, value, ...) -> string", "Sets multiple application options and return list with values in format `optionName=newValue`.");
    addDocumentation("toggleConfig", "toggleConfig(optionName) -> bool", "Toggles an option (true to false and vice versa) and returns the new value.");
    addDocumentation("info", "info([pathName]) -> string", "Returns paths and flags used by the application.");
    addDocumentation("eval", "eval(script)", "Evaluates script and returns result.");
    addDocumentation("source", "source(fileName)", "Evaluates script file and returns result of last expression in the script.");
    addDocumentation("currentPath", "currentPath() -> string", "Get current path.");
    addDocumentation("currentPath", "currentPath(path)", "Set current path.");
    addDocumentation("str", "str(value) -> string", "Converts a value to string.");
    addDocumentation("input", "input() -> `ByteArray`", "Returns standard input passed to the script.");
    addDocumentation("toUnicode", "toUnicode(ByteArray) -> string", "Returns string for bytes with encoding detected by checking Byte Order Mark (BOM).");
    addDocumentation("toUnicode", "toUnicode(ByteArray, encodingName) -> string", "Returns string for bytes with given encoding.");
    addDocumentation("fromUnicode", "fromUnicode(String, encodingName) -> `ByteArray`", "Returns encoded text.");
    addDocumentation("data", "data(mimeType) -> `ByteArray`", "Returns data for automatic commands or selected items.");
    addDocumentation("setData", "setData(mimeType, data) -> bool", "Modifies data for `data()` and new clipboard item.");
    addDocumentation("removeData", "removeData(mimeType)", "Removes data for `data()` and new clipboard item.");
    addDocumentation("dataFormats", "dataFormats() -> array of strings", "Returns formats available for `data()`.");
    addDocumentation("print", "print(value)", "Prints value to standard output.");
    addDocumentation("serverLog", "serverLog(value)", "Prints value to application log.");
    addDocumentation("logs", "logs() -> string", "Returns application logs.");
    addDocumentation("abort", "abort()", "Aborts script evaluation.");
    addDocumentation("fail", "fail()", "Aborts script evaluation with nonzero exit code.");
    addDocumentation("setCurrentTab", "setCurrentTab(tabName)", "Focus tab without showing main window.");
    addDocumentation("selectItems", "selectItems(row, ...)", "Selects items in current tab.");
    addDocumentation("selectedTab", "selectedTab() -> string", "Returns tab that was selected when script was executed.");
    addDocumentation("selectedItems", "selectedItems() -> array of ints", "Returns selected rows in current tab.");
    addDocumentation("selectedItemData", "selectedItemData(index) -> array of `Item`", "Returns data for given selected item.");
    addDocumentation("setSelectedItemData", "setSelectedItemData(index, Item) -> bool", "Set data for given selected item.");
    addDocumentation("selectedItemsData", "selectedItemsData() -> array of `Item`", "Returns data for all selected items.");
    addDocumentation("setSelectedItemsData", "setSelectedItemsData(Item[])", "Set data to all selected items.");
    addDocumentation("currentItem", "currentItem() -> int", "Returns current row in current tab.");
    addDocumentation("escapeHtml", "escapeHtml(text) -> string", "Returns text with special HTML characters escaped.");
    addDocumentation("unpack", "unpack(data) -> `Item`", "Returns deserialized object from serialized items.");
    addDocumentation("pack", "pack(Item) -> `ByteArray`", "Returns serialized item.");
    addDocumentation("getItem", "getItem(row) -> `Item`", "Returns an item in current tab.");
    addDocumentation("setItem", "setItem(row, text|Item)", "Inserts item to current tab.");
    addDocumentation("toBase64", "toBase64(data) -> string", "Returns base64-encoded data.");
    addDocumentation("fromBase64", "fromBase64(base64String) -> `ByteArray`", "Returns base64-decoded data.");
    addDocumentation("md5sum", "md5sum(data) -> `ByteArray`", "Returns MD5 checksum of data.");
    addDocumentation("sha1sum", "sha1sum(data) -> `ByteArray`", "Returns SHA1 checksum of data.");
    addDocumentation("sha256sum", "sha256sum(data) -> `ByteArray`", "Returns SHA256 checksum of data.");
    addDocumentation("sha512sum", "sha512sum(data) -> `ByteArray`", "Returns SHA512 checksum of data.");
    addDocumentation("open", "open(url, ...) -> bool", "Tries to open URLs in appropriate applications.");
    addDocumentation("execute", "execute(argument, ..., null, stdinData, ...) -> `FinishedCommand`", "Executes a command.");
    addDocumentation("currentWindowTitle", "String currentWindowTitle() -> string", "Returns window title of currently focused window.");
    addDocumentation("currentClipboardOwner", "String currentClipboardOwner() -> string", "Returns name of the current clipboard owner.");
    addDocumentation("dialog", "dialog(...)", "Shows messages or asks user for input.");
    addDocumentation("menuItems", "menuItems(text...) -> string", "Opens menu with given items and returns selected item or an empty string.");
    addDocumentation("menuItems", "menuItems(items[]) -> int", "Opens menu with given items and returns index of selected item or -1.");
    addDocumentation("settings", "settings() -> array of strings", "Returns array with names of all custom user options.");
    addDocumentation("settings", "Value settings(optionName)", "Returns value for a custom user option.");
    addDocumentation("settings", "settings(optionName, value)", "Sets value for a new custom user option or overrides existing one.");
    addDocumentation("dateString", "dateString(format) -> string", "Returns text representation of current date and time.");
    addDocumentation("commands", "commands() -> array of `Command`", "Return list of all commands.");
    addDocumentation("setCommands", "setCommands(Command[])", "Clear previous commands and set new ones.");
    addDocumentation("importCommands", "Command[] importCommands(String) -> array of `Command`", "Return list of commands from exported commands text.");
    addDocumentation("exportCommands", "String exportCommands(Command[]) -> string", "Return exported command text.");
    addDocumentation("addCommands", "addCommands(Command[])", "Opens Command dialog, adds commands and waits for user to confirm the dialog.");
    addDocumentation("networkGet", "NetworkReply networkGet(url) -> `NetworkReply`", "Sends HTTP GET request.");
    addDocumentation("networkPost", "NetworkReply networkPost(url, postData) -> `NetworkReply`", "Sends HTTP POST request.");
    addDocumentation("networkGetAsync", "NetworkReply networkGetAsync(url) -> `NetworkReply`", "Same as `networkGet()` but the request is asynchronous.");
    addDocumentation("networkPostAsync", "NetworkReply networkPostAsync(url, postData) -> `NetworkReply`", "Same as `networkPost()` but the request is asynchronous.");
    addDocumentation("env", "env(name) -> `ByteArray`", "Returns value of environment variable with given name.");
    addDocumentation("setEnv", "setEnv(name, value) -> bool", "Sets environment variable with given name to given value.");
    addDocumentation("sleep", "sleep(time)", "Wait for given time in milliseconds.");
    addDocumentation("afterMilliseconds", "afterMilliseconds(time, function)", "Executes function after given time in milliseconds.");
    addDocumentation("screenNames", "screenNames() -> array of strings", "Returns list of available screen names.");
    addDocumentation("screenshot", "screenshot(format='png', [screenName]) -> `ByteArray`", "Returns image data with screenshot.");
    addDocumentation("screenshotSelect", "screenshotSelect(format='png', [screenName]) -> `ByteArray`", "Same as `screenshot()` but allows to select an area on screen.");
    addDocumentation("queryKeyboardModifiers", "queryKeyboardModifiers() -> array of strings", "Returns list of currently pressed keyboard modifiers which can be 'Ctrl', 'Shift', 'Alt', 'Meta'.");
    addDocumentation("pointerPosition", "pointerPosition() -> array of ints (with two elements)", "Returns current mouse pointer position (x, y coordinates on screen).");
    addDocumentation("setPointerPosition", "setPointerPosition(x, y)", "Moves mouse pointer to given coordinates on screen.");
    addDocumentation("iconColor", "iconColor() -> string", "Get current tray and window icon color name.");
    addDocumentation("iconColor", "iconColor(colorName)", "Set current tray and window icon color name (examples: 'orange', '#ffa500', '#09f').");
    addDocumentation("iconTag", "iconTag() -> string", "Get current tray and window icon tag text.");
    addDocumentation("iconTag", "iconTag(tag)", "Set current tray and window tag text.");
    addDocumentation("iconTagColor", "iconTagColor() -> string", "Get current tray and window tag color name.");
    addDocumentation("iconTagColor", "iconTagColor(colorName)", "Set current tray and window tag color name.");
    addDocumentation("loadTheme", "loadTheme(path)", "Loads theme from an INI file.");
    addDocumentation("onClipboardChanged", "onClipboardChanged()", "Called when clipboard or `Linux mouse selection`_ changes and is not set by CopyQ, is not marked as hidden nor secret (see the other callbacks).");
    addDocumentation("onOwnClipboardChanged", "onOwnClipboardChanged()", "Called when clipboard or `Linux mouse selection`_ is set by CopyQ and is not marked as hidden nor secret (see the other callbacks).");
    addDocumentation("onHiddenClipboardChanged", "onHiddenClipboardChanged()", "Called when clipboard or `Linux mouse selection`_ changes and is marked as hidden but not secret (see the other callbacks).");
    addDocumentation("onSecretClipboardChanged", "onSecretClipboardChanged()", "Called if the clipboard or `Linux mouse selection`_ changes and contains a password or other secret (for example, copied from clipboard manager).");
    addDocumentation("onClipboardUnchanged", "onClipboardUnchanged()", "Called when clipboard or `Linux mouse selection`_ changes but data remained the same.");
    addDocumentation("onStart", "onStart()", "Called when application starts.");
    addDocumentation("onExit", "onExit()", "Called just before application exists.");
    addDocumentation("runAutomaticCommands", "runAutomaticCommands() -> bool", "Executes automatic commands on current data.");
    addDocumentation("clearClipboardData", "clearClipboardData()", "Clear clipboard visibility in GUI.");
    addDocumentation("updateTitle", "updateTitle()", "Update main window title and tool tip from current data.");
    addDocumentation("updateClipboardData", "updateClipboardData()", "Sets current clipboard data for tray menu, window title and notification.");
    addDocumentation("setTitle", "setTitle([title])", "Set main window title and tool tip.");
    addDocumentation("synchronizeToSelection", "synchronizeToSelection(text)", "Synchronize current data from clipboard to `Linux mouse selection`_.");
    addDocumentation("synchronizeFromSelection", "synchronizeFromSelection(text)", "Synchronize current data from `Linux mouse selection`_ to clipboard.");
    addDocumentation("provideClipboard", "provideClipboard()", "Starts a process provides a data for clipboard.");
    addDocumentation("provideSelection", "provideSelection()", "Starts a process that provides a data for `Linux mouse selection`_.");
    addDocumentation("monitorClipboard", "monitorClipboard()", "Starts a clipboard monitor process.");
    addDocumentation("clipboardFormatsToSave", "clipboardFormatsToSave() -> array of strings", "Returns list of clipboard format to save automatically.");
    addDocumentation("saveData", "saveData()", "Save current data (depends on `mimeOutputTab`).");
    addDocumentation("hasData", "hasData() -> bool", "Returns true only if some non-empty data can be returned by data().");
    addDocumentation("showDataNotification", "showDataNotification()", "Show notification for current data.");
    addDocumentation("hideDataNotification", "hideDataNotification()", "Hide notification for current data.");
    addDocumentation("setClipboardData", "setClipboardData()", "Sets clipboard data for menu commands.");
    addDocumentation("styles", "styles() -> array of strings", "List available styles for `style` option.");
    addDocumentation("onItemsAdded", "onItemsAdded()", "Called when items are added to a tab.");
    addDocumentation("onItemsRemoved", "onItemsRemoved()", "Called when items are being removed from a tab.");
    addDocumentation("onItemsChanged", "onItemsChanged()", "Called when data in items change.");
    addDocumentation("onTabSelected", "onTabSelected()", "Called when another tab is opened.");
    addDocumentation("onItemsLoaded", "onItemsLoaded()", "Called when all items are loaded into a tab.");
    addDocumentation("ByteArray", "ByteArray", "Wrapper for QByteArray Qt class.");
    addDocumentation("File", "File", "Wrapper for QFile Qt class.");
    addDocumentation("Dir", "Dir", "Wrapper for QDir Qt class.");
    addDocumentation("TemporaryFile", "TemporaryFile", "Wrapper for QTemporaryFile Qt class.");
    addDocumentation("Settings", "Settings", "Reads and writes INI configuration files. Wrapper for QSettings Qt class.");
    addDocumentation("Item", "Item", "Object with MIME types of an item.");
    addDocumentation("ItemSelection", "ItemSelection", "List of items from given tab.");
    addDocumentation("FinishedCommand", "FinishedCommand", "Properties of finished command.");
    addDocumentation("NetworkRequest", "NetworkRequest", "Make HTTP requests.");
    addDocumentation("NetworkReply", "NetworkReply", "Received network reply object.");
    addDocumentation("Command", "Command", "Wrapper for a command (from Command dialog).");
    addDocumentation("arguments", "arguments", "Array for accessing arguments passed to current function or the script (`arguments[0]` is the script itself).");
    addDocumentation("global", "global", "Object allowing to modify global scope which contains all functions like `copy()` or `add()`.");
    addDocumentation("console", "console", "Allows some logging and debugging.");
    addDocumentation("mimeText", "mimeText", "Data contains plain text content. Value: 'text/plain'.");
    addDocumentation("mimeHtml", "mimeHtml", "Data contains HTML content. Value: 'text/html'.");
    addDocumentation("mimeUriList", "mimeUriList", "Data contains list of links to files, web pages etc. Value: 'text/uri-list'.");
    addDocumentation("mimeWindowTitle", "mimeWindowTitle", "Current window title for copied clipboard. Value: 'application/x-copyq-owner-window-title'.");
    addDocumentation("mimeItems", "mimeItems", "Serialized items. Value: 'application/x-copyq-item'.");
    addDocumentation("mimeItemNotes", "mimeItemNotes", "Data contains notes for item. Value: 'application/x-copyq-item-notes'.");
    addDocumentation("mimeIcon", "mimeIcon", "Data contains icon for item. Value: 'application/x-copyq-item-icon'.");
    addDocumentation("mimeOwner", "mimeOwner", "If available, the clipboard was set from CopyQ (from script or copied items). Value: 'application/x-copyq-owner'.");
    addDocumentation("mimeClipboardMode", "mimeClipboardMode", "Contains `selection` if data is from `Linux mouse selection`_. Value: 'application/x-copyq-clipboard-mode'.");
    addDocumentation("mimeCurrentTab", "mimeCurrentTab", "Current tab name when invoking command from main window. Value: 'application/x-copyq-current-tab'.");
    addDocumentation("mimeSelectedItems", "mimeSelectedItems", "Selected items when invoking command from main window. Value: 'application/x-copyq-selected-items'.");
    addDocumentation("mimeCurrentItem", "mimeCurrentItem", "Current item when invoking command from main window. Value: 'application/x-copyq-current-item'.");
    addDocumentation("mimeHidden", "mimeHidden", "If set to `1`, the clipboard or item content will be hidden in GUI. Value: 'application/x-copyq-hidden'.");
    addDocumentation("mimeSecret", "mimeSecret", "If set to `1`, the clipboard contains a password or other secret (for example, copied from clipboard manager).");
    addDocumentation("mimeShortcut", "mimeShortcut", "Application or global shortcut which activated the command. Value: 'application/x-copyq-shortcut'.");
    addDocumentation("mimeColor", "mimeColor", "Item color (same as the one used by themes). Value: 'application/x-copyq-color'.");
    addDocumentation("mimeOutputTab", "mimeOutputTab", "Name of the tab where to store new item. Value: 'application/x-copyq-output-tab'.");
    addDocumentation("mimeDisplayItemInMenu", "mimeDisplayItemInMenu", "Indicates if display commands run for a menu. Value: 'application/x-copyq-display-item-in-menu'.");
    addDocumentation("plugins.itemsync.selectedTabPath", "plugins.itemsync.selectedTabPath()", "Returns synchronization path for current tab (mimeCurrentTab).");
    addDocumentation("plugins.itemsync.tabPaths", "plugins.itemsync.tabPaths", "Object that maps tab name to synchronization path.");
    addDocumentation("plugins.itemsync.mimeBaseName", "plugins.itemsync.mimeBaseName", "MIME type for accessing base name (without full path).");
    addDocumentation("plugins.itemtags.userTags", "plugins.itemtags.userTags", "List of user-defined tags.");
    addDocumentation("plugins.itemtags.tags", "plugins.itemtags.tags(row, ...)", "List of tags for items in given rows.");
    addDocumentation("plugins.itemtags.tag", "plugins.itemtags.tag(tagName, [rows, ...])", "Add given tag to items in given rows or selected items.");
    addDocumentation("plugins.itemtags.untag", "plugins.itemtags.untag(tagName, [rows, ...])", "Remove given tag from items in given rows or selected items.");
    addDocumentation("plugins.itemtags.clearTags", "plugins.itemtags.clearTags([rows, ...])", "Remove all tags from items in given rows or selected items.");
    addDocumentation("plugins.itemtags.hasTag", "plugins.itemtags.hasTag(tagName, [rows, ...])", "Return true if given tag is present in any of items in given rows or selected items.");
    addDocumentation("plugins.itemtags.mimeTags", "plugins.itemtags.mimeTags", "MIME type for accessing list of tags.");
    addDocumentation("plugins.itempinned.isPinned", "plugins.itempinned.isPinned(rows, ...)", "Returns true only if any item in given rows is pinned.");
    addDocumentation("plugins.itempinned.pin", "plugins.itempinned.pin(rows, ...)", "Pin items in given rows or selected items or new item created from clipboard (if called from automatic command).");
    addDocumentation("plugins.itempinned.unpin", "plugins.itempinned.unpin(rows, ...)", "Unpin items in given rows or selected items.");
    addDocumentation("plugins.itempinned.mimePinned", "plugins.itempinned.mimePinned", "Presence of the format in an item indicates that it is pinned.");
}
