_DWORD *__thiscall sub_101E98A0(int *this, _DWORD *a2, float a3)
{
  _DWORD *result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  void (__thiscall *v8)(int *, _DWORD *); // edx
  _DWORD v9[10]; // [esp+4h] [ebp-28h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)((*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(
                                 cvar,
                                 "cam_ots_freeaim_enable")
                             + 28)
                 + 48) )
  {
    result = a2;
    v5 = this[527];
    *a2 = this[526];
    v6 = this[528];
  }
  else
  {
    v7 = *this;
    *(float *)&v9[8] = a3;
    v9[6] = -1;
    v8 = *(void (__thiscall **)(int *, _DWORD *))(v7 + 1496);
    *(float *)&v9[9] = *(float *)(dword_106BB52C + 44);
    v8(this, v9);
    result = a2;
    v5 = v9[1];
    *a2 = v9[0];
    v6 = v9[2];
  }
  a2[1] = v5;
  a2[2] = v6;
  return result;
}
