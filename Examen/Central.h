//
//  CentralViewController.h
//  Examen
//
//  Created by Daniela Mota on 5/31/15.
//  Copyright (c) 2015 Agustin Castaneda. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreBluetooth/CoreBluetooth.h>
#import "Declarations.h"
@interface Central : UIViewController<CBCentralManagerDelegate, CBPeripheralDelegate>

@property (strong, nonatomic) CBCentralManager      *centralManager;
@property (strong, nonatomic) CBPeripheral          *discoveredPeripheral;
@property (strong, nonatomic) NSMutableData         *data;
@property (strong, nonatomic) IBOutlet UITextField *txtBT;


//btn


//text


@end
