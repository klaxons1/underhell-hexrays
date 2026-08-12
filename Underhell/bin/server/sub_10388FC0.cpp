int __thiscall sub_10388FC0(int *this, int a2, float *a3)
{
  int v4; // esi
  int v5; // ecx
  float *v6; // eax
  int v7; // edx
  double v8; // st7
  int (__thiscall *v9)(int *); // eax
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  _BYTE v14[12]; // [esp+8h] [ebp-18h] BYREF
  _BYTE v15[12]; // [esp+14h] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
  if ( !v4
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4)
    || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1096))(v4)) == 0 )
  {
    v5 = v4;
  }
  v6 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 536))(v5, v15);
  v7 = *this;
  *a3 = *v6;
  a3[1] = v6[1];
  v8 = v6[2];
  v9 = *(int (__thiscall **)(int *))(v7 + 368);
  a3[2] = v8;
  v10 = v9(this);
  v11 = v10;
  if ( !v10
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10)
    || (v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1096))(v11)) == 0 )
  {
    v12 = v11;
  }
  return (*(int (__thiscall **)(int, _BYTE *, _DWORD, _DWORD))(*(_DWORD *)v12 + 528))(v12, v14, 0, 0);
}
