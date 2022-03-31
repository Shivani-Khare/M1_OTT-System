# TEST PLAN:

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Pass or Fail**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01       | Add logs to the system.                         | 1 | `Congratulations! We have updated our log directory with your log!` | `Congratulations! We have updated our log directory with your log!` | Pass |
|  T_02      |Modify existing log present in system | 2| `Success` | `Success` | Pass|
|  T_03   |Veiw the Log Directory |3| `Press Any Key To Go Back` | `Press Any Key To Go Back` |Pass |
| T_04 | To remove log from log directory | 4| `Your record has been removed successfully. You will be missed!` | `Your record has been removed successfully. You will be missed!`| Pass | 
| T_05 |To search log from directory | 5| `Record Found.`| `Record Found` | Pass|
| |To search log from directory | 5|`Requested log not found in our database! We're sorry!`| `Requested log not found in our database! We're sorry!`| Fail|
| T_06 | To make payment for subscription| 5 | `System Message: THANK YOU %s WE APPRECIATE YOUR TIMELY PAYMENTS` | `System Message: THANK YOU %s WE APPRECIATE YOUR TIMELY PAYMENTS` | Pass |
| T_07 | To login to OTT_system | 6| `CONGRATULATIONS ON SUCCESSFUL LOGIN ! Press esc Key to exit or Press any other key to add another log` |  `CONGRATULATIONS ON SUCCESSFUL LOGIN ! Press esc Key to exit or Press any other key to add another log`| Pass |                            
| | To login to OTT_system | 6|`SORRY!!!!  IT SEEMS YOUR USERNAME OR PASSWORD IS INCORRECT!`| `SORRY!!!!  IT SEEMS YOUR USERNAME OR PASSWORD IS INCORRECT!`| Fail|

