Pod::Spec.new do |s|
  s.name = "PointSDK-Cocoapods-iOS"
  s.version = "1.7"
  s.summary = "Bluedot Innovation's cutting edge location services solution - the Bluedot Point SDK - is powering the most innovative location-based apps for iOS and Android.
  Deliver creative content and collect valuable analytics using Bluedot Innovation's powerful, precise and easy-to-use location services technology."
  s.homepage = "http://www.bluedotinnovation.com"
  s.license = {
    :type => 'Copyright',
    :text => <<-LICENSE

    Point SDK Cocoapods iOS

    By dowloading or using the Bluedot Point SDK for iOS, You agree to the Bluedot Terms and Conditions
    https://www.zendesk.com/company/terms and Privacy Policy http://www.bluedotinnovation.com/html/downloads/pdfs/privacy-policy-bluedot-170815.pdf
    and Billing Policy http://www.bluedotinnovation.com/html/downloads/pdfs/privacy-policy-bluedot-170815.pdf
    and acknowledge that such terms govern Your use of and access to the iOS SDK.

    LICENSE
  }
  s.author = { "Bluedot Innovation" => "http://www.bluedotinnovation.com" }
  s.source = { :git => 'https://github.com/Bluedot-Innovation/Bluedot-Point-iOS-SDK.git', :tag => s.version.to_s }
  s.platform = :ios
  s.ios.deployment_target = '7.0'
  s.requires_arc = true
  s.documentation_url = 'http://docs.bluedotinnovation.com'
  s.library = 'z'
  s.frameworks = 'AudioToolbox', 'AVFoundation', 'CoreGraphics', 'CoreLocation', 'CoreMotion', 'Foundation', 'MapKit', 'QuartzCore', 'SystemConfiguration', 'UIKit'
  s.weak_framework = 'CoreData', 'Foundation'
  s.source_files = 'BDPointSDK/include/*.h'
  s.vendored_libraries = 'BDPointSDK/libBDPointSDK-iphoneos.a', 'BDPointSDK/libBDPointSDK-iphonesimulator.a'
end