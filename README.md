# `bs-react-native-fast-image`

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`react-native-fast-image`](https://github.com/DylanVann/react-native-fast-image).

Exposed as `ReactNativeFastImage` module.

`bs-react-native-fast-image` X.y._ means it's compatible with
`react-native-fast-image` X.y._

## Installation

When
[`react-native-fast-image`](https://github.com/DylanVann/react-native-fast-image)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install bs-react-native-fast-image
# or
yarn add bs-react-native-fast-image
```

`bs-react-native-fast-image` should be added to `bs-dependencies` in your
`bsconfig.json`. Something like

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "bs-react-native-fast-image"
  ],
  //...
}
```

## Usage

### Types

#### `ReactNativeFastImage.t`

...

### Methods

#### `ReactNativeFastImage.method`

...

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more informations about recent
releases.

---

## Contribute

Read the
[contribution guidelines](https://github.com/reason-react-native/.github/blob/master/CONTRIBUTING.md)
before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](https://github.com/reason-react-native/.github/blob/master/CODE_OF_CONDUCT.md)
so that you can understand what actions will and will not be tolerated.
