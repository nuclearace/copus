// swift-tools-version:4.0

import PackageDescription

let package = Package(
    name: "COPUS",
    pkgConfig: "opus",
    products: [
        .library(name: "COPUS", targets: ["COPUS"])
    ],
    targets: [
        .target(name: "COPUS", publicHeadersPath: "./shim.h")
    ]
)
