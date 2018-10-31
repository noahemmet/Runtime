// swift-tools-version:4.2
import PackageDescription

let package = Package(
    name: "Runtime",
    products: [
        .library(
            name: "Runtime",
            targets: ["Runtime"]),
        ],
    dependencies: [],
    targets: [
        .target(
            name: "Runtime",
            dependencies: [],
            path: "Runtime"),
        .testTarget(
            name: "RuntimeTests",
            dependencies: ["Runtime"],
            path: "RuntimeTests"),
        ],
    swiftLanguageVersions: [.v4_2]
)
