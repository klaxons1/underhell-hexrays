int __thiscall sub_100736B0(int this, int a2)
{
  int result; // eax
  int v4; // [esp+20h] [ebp-14h] BYREF
  __int16 v5; // [esp+24h] [ebp-10h]
  int v6; // [esp+26h] [ebp-Eh]
  float v7[2]; // [esp+2Ch] [ebp-8h] BYREF

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 )
  {
    (*((void (__thiscall **)(void ***, _DWORD, int))*off_103ECFF8[0] + 1))(off_103ECFF8[0], 0, 1);
    if ( *(_BYTE *)(this + 1212) )
    {
      v5 = 17;
      v6 = -16777216;
      v4 = 33556992;
      ((void (__thiscall *)(void ***, int *))(*off_103E77E8)[4])(off_103E77E8, &v4);
    }
    v7[0] = *(float *)(this + 1216);
    v7[1] = *(float *)(this + 1220);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 332))(dword_1041315C, v7);
    return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413178 + 124))(
             *(float *)(this + 1224),
             *(float *)(this + 1228));
  }
  return result;
}
