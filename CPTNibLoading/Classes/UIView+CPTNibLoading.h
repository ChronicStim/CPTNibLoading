//
//  UIView+CPTNibLoading.h
//  UIView+CPTNibLoading
//
//  Copyright © 2013 Nicolas Bouilleaud
//  UIView+NibLoading.h
//
//  Copyright © 2015 Inspace Labs Sp z o. o. Spółka Komandytowa. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.

#import <UIKit/UIKit.h>

@interface UIView (CPTNibLoading)

// Loads the views inside a nib and adds it as subviews of the receiver.
// There must be exactly one root UIView in the nib, acting as a container for the subviews of the receiver.
// The subviews are reparented to the receiver, the container view is discarded.
//
// Additionally, the container view's size is used as the default size for the receiver :
// If the receiver's bounds is not CGRectZero, the container view is resized prior reparenting the subviews, so that the subviews are resized.
// If the receiver's bounds is CGRectZero, it's set to the container view's bounds.
//
- (void)cpt_loadContentsFromNibNamed:(NSString *)nibName bundle:(NSBundle *)bundle;
- (void)cpt_loadContentsFromNibNamed:(NSString *)nibName;

// Convenience method, loads a nib named after the class name.
- (void)cpt_loadContentsFromNib;

// View where all content from nib will be added.
- (UIView *)cpt_contentViewForNib;
@end

// Convenience UIView subclass.
//
// Custom UIViews can simply subclass CPTNibLoadedView.
// It calls cpt_loadContentsFromNib in its initializer.
//
// If you need to subclass another UIView subclass (e.g. a custom UIControl),
// you'll need to call cpt_loadContentsFromNib yourself.
//
@interface CPTNibLoadedView : UIView

+(NSInteger)uniqueCPTNibLoadedViewTag;

@end
