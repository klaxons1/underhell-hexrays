void __usercall sub_10130650(int a1@<ebp>)
{
  int *v1; // eax
  int v2; // [esp-68h] [ebp-74h]
  _DWORD v3[23]; // [esp-50h] [ebp-5Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v3[20] = a1;
  v3[21] = retaddr;
  if ( !byte_10439450 )
  {
    byte_10439450 = 1;
    v3[19] = 0;
    v1 = (int *)sub_10242540("CCenterStringLabel");
    v3[8] = 2;
    v3[9] = 2;
    v3[11] = 2;
    memset(&v3[13], 0, 12);
    v2 = v1[3];
    v3[0] = "OnScreenSizeChanged";
    v3[4] = sub_101304C0;
    memset(&v3[5], 0, 12);
    v3[10] = "oldwide";
    v3[12] = "oldtall";
    sub_100698A0(v1, v2, v3);
  }
}
