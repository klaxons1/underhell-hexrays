char __thiscall sub_10081A70(int this, float *a2, float a3, float a4, float a5)
{
  char *v6; // eax
  int (__thiscall *v7)(int, _DWORD *, _DWORD); // edx
  char Buffer[256]; // [esp+10h] [ebp-13Ch] BYREF
  _DWORD v10[12]; // [esp+110h] [ebp-3Ch] BYREF
  int v11[3]; // [esp+140h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v6 = sub_1001E280(Buffer, "[Nav] %s", "Set vector goal\n");
    sub_10029660(*(_DWORD **)(this + 4), (int)v6);
  }
  if ( !sub_1007EF40((_DWORD *)this, (float *)v11, a2, a3, a4, a5) )
    return 0;
  *(float *)&v10[8] = -1.0;
  *(float *)&v10[9] = -1.0;
  v10[1] = v11[0];
  memset(&v10[4], 255, 16);
  v10[3] = v11[2];
  v7 = *(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 20);
  v10[11] = dword_10608878;
  v10[2] = v11[1];
  v10[0] = 4;
  v10[10] = 0;
  return v7(this, v10, 0);
}
