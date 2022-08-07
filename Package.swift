// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Region",
    products: [
        .library(
            name: "Region",
            targets: ["Region"]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "Region",
            path: "artifacts/ios/Region.xcframework"
        ),
    ]
)
