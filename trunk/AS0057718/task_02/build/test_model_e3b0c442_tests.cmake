add_test([=[LinearModelTest.CalculatesCorrectValue]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=LinearModelTest.CalculatesCorrectValue]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[LinearModelTest.CalculatesCorrectValue]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:5]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[LinearModelTest.ZeroInput]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=LinearModelTest.ZeroInput]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[LinearModelTest.ZeroInput]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:10]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[LinearModelTest.ZeroTemperature]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=LinearModelTest.ZeroTemperature]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[LinearModelTest.ZeroTemperature]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:15]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[NonlinearModelTest.CalculatesCorrectValue]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=NonlinearModelTest.CalculatesCorrectValue]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[NonlinearModelTest.CalculatesCorrectValue]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:20]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[NonlinearModelTest.ZeroPreviousTemperature]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=NonlinearModelTest.ZeroPreviousTemperature]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[NonlinearModelTest.ZeroPreviousTemperature]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:27]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[NonlinearModelTest.ZeroInput]=]  D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build/test_model.exe [==[--gtest_filter=NonlinearModelTest.ZeroInput]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[NonlinearModelTest.ZeroInput]=]
  PROPERTIES
    
    DEF_SOURCE_LINE [==[D:\projects\tmay\AS00577-22\trunk\AS0057722\task_02\test\test_model.cpp:32]==]
    WORKING_DIRECTORY [==[D:/projects/tmay/AS00577-22/trunk/AS0057722/task_02/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(test_model_TESTS [==[LinearModelTest.CalculatesCorrectValue]==] [==[LinearModelTest.ZeroInput]==] [==[LinearModelTest.ZeroTemperature]==] [==[NonlinearModelTest.CalculatesCorrectValue]==] [==[NonlinearModelTest.ZeroPreviousTemperature]==] [==[NonlinearModelTest.ZeroInput]==])
