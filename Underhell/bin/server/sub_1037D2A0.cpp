int __thiscall sub_1037D2A0(int this, int a2, int a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  char v7; // bl
  int result; // eax
  float v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-1Ch]
  _DWORD v12[3]; // [esp+20h] [ebp-Ch] BYREF

  sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.FlechetteHitWorld", 0.0, 0);
  sub_100E0970(this, v4, 0, 0);
  if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24)) )
  {
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 140))(this, a2, -1);
    sub_10112C00(this + 320, 0);
    sub_101129A0((unsigned __int16 *)(this + 320), 4);
  }
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v5 = *(_DWORD *)(this + 480);
  v6 = *(_DWORD *)(this + 484);
  v12[0] = *(_DWORD *)(this + 476);
  v12[1] = v5;
  v12[2] = v6;
  v7 = sub_1040BA20(a2, v12);
  v10 = off_1067425C;
  *(_DWORD *)(this + 196) = 0;
  sub_100EC3F0((_DWORD *)this, 0, 0.0, v10);
  v11 = off_10674260;
  *(_DWORD *)(this + 1704) = -1;
  sub_100EC3F0((_DWORD *)this, 0, 0.0, v11);
  if ( v7 )
  {
    sub_1037AEE0(this);
  }
  else
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_1037AEE0, 0.0, 0);
    v9 = *(float *)(dword_106E8844 + 44) - 1.0 + *(float *)(dword_106B31C8 + 12);
    sub_100EC4A0((int *)this, v9, 0);
  }
  sub_100C3330(this, dword_1067426C);
  result = dword_106E9674 + 1;
  dword_106E9674 = result;
  if ( (result & 1) != 0 )
  {
    sub_10262ED0(a3, 2, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = (**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, this + 580, 0);
    if ( result != 32 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      return ((int (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
               off_1061B7A0,
               this + 580,
               1,
               1,
               0);
    }
  }
  return result;
}
