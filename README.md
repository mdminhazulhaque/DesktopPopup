DesktopPopup
============

A simple Qt based desktop popup utility

## Screenshot ##
![DesktopPopup] (http://i.imgur.com/Ie7tE3S.png)

![DesktopPopupManager] (http://i.imgur.com/OPeQiFd.png)

## Requirment ##
* Qt[4|5]

## HowTo ##

```cpp
#include <popup.h>

Popup popup;
popup.showPopup(
        "1 new mail",
        "From Google, Your account activity report is available"
        );
```

## Available Signals ##
* `closed()` When popup is closed by pressing on the cross button
* `clicked()` When popup body is clicked

## TODO ##
* Add style
* Add transition animation