﻿// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"

namespace TB = ::Test::Bootstrap;
namespace TP = ::Test::Packages;

namespace Test::KozaniSendToLocalTests
{
    class KozaniSendToLocalTests
    {
    public:
        BEGIN_TEST_CLASS(KozaniSendToLocalTests)
            TEST_CLASS_PROPERTY(L"ThreadingModel", L"MTA")
        END_TEST_CLASS()

        TEST_CLASS_SETUP(ClassSetup)
        {
            ::TB::Setup();
            return true;
        }

        TEST_CLASS_CLEANUP(ClassCleanup)
        {
            ::TB::Cleanup();
            return true;
        }

        // TODO Replace this with your own tests
        TEST_METHOD(JustDoIt)
        {
        }
    };
}
