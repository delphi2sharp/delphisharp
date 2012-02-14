(* CRC Code Calculation and Checking Routines       *)
(* Created by Edward Huang, September, 1996         *)
{$WARN SYMBOL_PLATFORM OFF} //DM 07/05/2002
{$IFNDEF CRC_IMPLEMENTATION}
const
  CRC_MAKE    = 0;                     (* For Flags *)
  CRC_CHECK   = 1;
{$ENDIF}

  (* CRC-CCITT,  use X^16+X^12+X^5+1          *)
  (* Last 2 bytes of buf are for CRC code     *)
  (* Return Code : CRC Code                   *)
  (*               For Checking, 0 = correct  *)
  function CRC_CCITT(var buf : array of Byte; Length : word; Flag : Byte ) : word;
{$IFDEF CRC_IMPLEMENTATION}
           external 'CRC.DLL' index 1;
{$ENDIF}

  (* CRC-16,  use X^16+X^15+X^2+1 *)
  (* Last 2 bytes of buf are for CRC code     *)
  (* Return Code : CRC Code                   *)
  (*               For Checking, 0 = correct  *)
  function CRC_16(var buf : array of Byte; Length : word; Flag : Byte ) : word;
{$IFDEF CRC_IMPLEMENTATION}
           external 'CRC.DLL' index 2;
{$ENDIF}

  (* CRC-32,  use X^32+X^26+X^23+X^22+X^16+X^11+X^10+X^8+X^7+X^5+X^4+X^2+X^1+1 *)
  (* Last 4 bytes of buf are for CRC code     *)
  (* Return Code : CRC Code                   *)
  (*               For Checking, 0 = correct  *)
  function CRC_32(var buf : array of Byte; Length : word; Flag : Byte ) : Longint;
{$IFDEF CRC_IMPLEMENTATION}
           external 'CRC.DLL' index 3;
{$ENDIF}

