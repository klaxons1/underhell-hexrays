void __usercall sub_10131030(int a1@<ebp>)
{
  int *v1; // eax
  int v2; // [esp-68h] [ebp-74h]
  _DWORD v3[23]; // [esp-50h] [ebp-5Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v3[20] = a1;
  v3[21] = retaddr;
  if ( !byte_1043954C )
  {
    byte_1043954C = 1;
    v3[19] = 0;
    v1 = (int *)sub_10242540("DragnDropSlot");
    memset(&v3[10], 0, 24);
    v2 = v1[3];
    v3[0] = "MenuItemSelected";
    v3[4] = sub_10130F60;
    memset(&v3[5], 0, 12);
    v3[8] = 1;
    v3[9] = 6;
    sub_100698A0(v1, v2, v3);
  }
}
