﻿using System;
using System.Collections.Generic;
using System.Text;
using System.Windows;

namespace GGE_EDITOR.Utilities.Controls
{
    class ScalarBox : NumberBox
    {
        static ScalarBox()
        {
            DefaultStyleKeyProperty.OverrideMetadata(typeof(ScalarBox),
                    new FrameworkPropertyMetadata(typeof(ScalarBox)));
        }
    }
}
