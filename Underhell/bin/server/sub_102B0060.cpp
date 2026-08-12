char __thiscall sub_102B0060(_DWORD *this, float *a2, float *a3)
{
  int v5; // eax
  _BYTE v6[12]; // [esp+8h] [ebp-B4h] BYREF
  float v7; // [esp+14h] [ebp-A8h]
  float v8; // [esp+18h] [ebp-A4h]
  float v9; // [esp+1Ch] [ebp-A0h]
  float v10; // [esp+20h] [ebp-9Ch]
  float v11; // [esp+24h] [ebp-98h]
  float v12; // [esp+28h] [ebp-94h]
  float v13; // [esp+34h] [ebp-88h]
  char v14; // [esp+38h] [ebp-84h]
  float v15[24]; // [esp+5Ch] [ebp-60h] BYREF
  int savedregs; // [esp+BCh] [ebp+0h] BYREF

  if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, a2, 0) & 0x30) != 0 )
    return 0;
  if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, a3, 0) & 0x30) == 0 )
    return 0;
  v5 = sub_100D1940(this);
  sub_1002A5F0((int)&savedregs, (int)a3, a2, a3, 48, v5, 0, (int)v6);
  if ( v13 < 1.0 )
  {
    sub_1001F130(v15);
    v15[0] = v7;
    v15[1] = v8;
    v15[2] = v9;
    v15[6] = v10;
    v15[7] = v11;
    v15[8] = v12;
    v15[14] = 8.0;
    LODWORD(v15[12]) = (v14 & 0x10) != 0;
    sub_1028E890((int)"watersplash", (int)v15);
  }
  return 1;
}
