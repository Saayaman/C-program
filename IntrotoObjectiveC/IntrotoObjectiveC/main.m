//
//  main.m
//  IntrotoObjectiveC
//
//  Created by ayako_sayama on 2017-04-18.
//  Copyright © 2017 ayako_sayama. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <time.h>


void printMyName(void);

int main(int argc, const char * argv[]) {
    
    
    @autoreleasepool {
        // insert code here...
        int i;
        i = 10;
        
//        char a = 'c';
//        BOOL b = YES;
//        BOOL c = NO;
//        bool aa = true;
        
        
        double d = 10.21;
//        float f = 10.21F;
        NSLog(@"%e", d);
        NSLog(@"%g", d);
        
        
        NSLog(@"Hello, World!");
        
        NSString* message = @"I love bananas";
        NSLog(@"%@", message);
        NSString* upperCaseMessage = [message uppercaseString];
        NSLog(@"%@", upperCaseMessage);
        
   //      [upperCaseMessage stringByAppendingString:@""]
        //pointer variables
         
        
        NSDate* current = [NSDate date];
        NSLog(@"%@", current);
        
         
         //strings are immutable in objective-C
         //Unicode Capable
        
        NSMutableString *car = [NSMutableString stringWithString:@"Porsche 911"];
        [car setString:@"Porsche Boxster"];
        NSLog(@"This is the car %@", car);

     
        
        //Check SUFFIX and PREFIX!
        NSString *car2 = @"Porsche Boxster";
        if ([car2 isEqualToString:@"Porsche Boxster"]) {
            NSLog(@"That car is a Porsche Boxster");
        }
        if ([car2 hasPrefix:@"Porsche"]) {
            NSLog(@"That car is a Porsche of some sort");
        }
        if ([car2 hasSuffix:@"Carrera"]) {
            // This won't execute
            NSLog(@"That car is a Carrera");
        }
        
    }
    
    printMyName();
    
    return 0;
}



void printMyName(void){
    NSLog(@"Ayako Sayama");
}
