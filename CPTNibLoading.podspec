#
# Be sure to run `pod lib lint CPTNibLoading.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CPTNibLoading'
  s.version          = '0.1.0'
  s.summary          = 'A UIView category for loading views from xib files.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = 'A UIView category and a subclass for loading custom iOS views from UINib (xib) files. Based on INSNibLoading by Michał Zaborowski.'

  s.homepage         = 'https://github.com/ChronicStim/CPTNibLoading.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'support@chronicstimulation.com' => 'support@chronicstimulation.com' }
  s.source           = { :git => 'https://github.com/ChronicStim/CPTNibLoading.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.source_files = 'CPTNibLoading/Classes/**/*'
  s.public_header_files = 'CPTNibLoading/Classes/*.h'
  
end
