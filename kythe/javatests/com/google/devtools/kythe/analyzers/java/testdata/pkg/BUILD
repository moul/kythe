load("//tools:build_rules/kythe.bzl", "java_verifier_test")

java_verifier_test(
    name = "annotations_tests",
    srcs = [
        "Annotations.java",
    ],
)

java_verifier_test(
    name = "callgraph_tests",
    srcs = [
        "Callgraph.java",
    ],
)

java_verifier_test(
    name = "definitions_tests",
    srcs = [
        "Definitions.java",
    ],
)

java_verifier_test(
    name = "selectors_tests",
    srcs = [
        "Selectors.java",
    ],
)

java_verifier_test(
    name = "comments_tests",
    srcs = [
        "Comments.java",
    ],
)

java_verifier_test(
    name = "classes_tests",
    srcs = [
        "Classes.java",
    ],
)

java_verifier_test(
    name = "enums_tests",
    srcs = [
        "Enums.java",
    ],
)

java_verifier_test(
    name = "interfaces_tests",
    srcs = [
        "Interfaces.java",
    ],
)

java_verifier_test(
    name = "inheritance_tests",
    srcs = [
        "Inheritance.java",
    ],
)

java_verifier_test(
    name = "imports_tests",
    srcs = [
        "Imports.java",
    ],
)

java_verifier_test(
    name = "files_tests",
    srcs = [
        "Files.java",
    ],
)

java_verifier_test(
    name = "cross_file_tests",
    srcs = [
        "CrossFile.java",
    ],
    deps = [
        ":files_tests",
    ],
)

java_verifier_test(
    name = "generics_tests",
    srcs = [
        "Generics.java",
    ],
    visibility = ["//kythe/go/serving/tools/testdata:__pkg__"],
)

java_verifier_test(
    name = "names_tests",
    srcs = [
        "Names.java",
    ],
)

java_verifier_test(
    name = "methods_tests",
    srcs = [
        "Methods.java",
    ],
)

java_verifier_test(
    name = "variables_tests",
    srcs = [
        "Variables.java",
    ],
)

java_verifier_test(
    name = "snippets_tests",
    srcs = ["Snippets.java"],
)

java_verifier_test(
    name = "lambdas_tests",
    srcs = ["Lambdas.java"],
)

java_verifier_test(
    name = "member_references_tests",
    srcs = ["MemberReferences.java"],
)
