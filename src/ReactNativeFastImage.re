// consult https://github.com/DylanVann/react-native-fast-image/blob/master/src/index.tsx

module Source = {
  type t;

  type uri;

  [@bs.obj]
  external uri:
    (
      ~uri: string=?,
      ~headers: Js.t('a)=?,
      ~priority: [@bs.string] [ | `low | `normal | `high]=?,
      ~cache: [@bs.string] [ | `immutable | `web | `cacheOnly]=?,
      unit
    ) =>
    uri;

  external fromUri: uri => t = "%indentity";
  external fromInt: int => t = "%indentity";
  external fromFloat: float => t = "%indentity";
};

module LoadEvent = {
  type payload = {
    width: float,
    height: float,
  };
  include ReactNative.Event.SyntheticEvent({
    type _payload = payload;
  });
};

module ProgressEvent = {
  type payload = {
    loaded: float,
    total: float,
  };
  include ReactNative.Event.SyntheticEvent({
    type _payload = payload;
  });
};

[@bs.module "DylanVann/react-native-fast-image"] [@react.component]
external make:
  (
    ~ref: ReactNative.NativeElement.ref=?,
    // FastImage props
    ~source: Source.t,
    ~fallback: bool=?,
    ~onError: unit => unit=?,
    ~onLoad: LoadEvent.t => unit=?,
    ~onLoadEnd: unit => unit=?,
    ~onLoadStart: unit => unit=?,
    ~onProgress: ProgressEvent.t => unit=?,
    ~resizeMode: [@bs.string] [ | `contain | `cover | `stretch | `center]=?,
    ~tintColor: ReactNative.Color.t,
    // View props
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityState: ReactNative.Accessibility.state=?,
    ~accessibilityTraits: array(ReactNative.AccessibilityTrait.t)=?,
    ~accessibilityValue: ReactNative.Accessibility.value=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: ReactNative.View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: ReactNative.Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~onResponderEnd: ReactNative.Event.pressEvent => unit=?,
    ~onResponderGrant: ReactNative.Event.pressEvent => unit=?,
    ~onResponderMove: ReactNative.Event.pressEvent => unit=?,
    ~onResponderReject: ReactNative.Event.pressEvent => unit=?,
    ~onResponderRelease: ReactNative.Event.pressEvent => unit=?,
    ~onResponderStart: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminate: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: ReactNative.Style.t=?,
    ~testID: string=?
  ) =>
  React.element =
  "default";

[@bs.module "DylanVann/react-native-fast-image"] [@bs.scope "default"]
external preload: array(Source.uri) => unit = "preload";
