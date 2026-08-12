int __thiscall sub_101959E0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // edx
  double v6; // st7
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  float v11; // [esp+10h] [ebp-2Ch]
  float v12; // [esp+14h] [ebp-28h]
  float v13; // [esp+1Ch] [ebp-20h]
  _DWORD v14[3]; // [esp+2Ch] [ebp-10h] BYREF
  _DWORD *v15; // [esp+38h] [ebp-4h]

  v2 = this;
  v15 = this;
  if ( !a2 )
  {
    v3 = this - 2;
    sub_10038150((int)(this - 2));
    v4 = v3[61];
    v5 = v3[63];
    v14[1] = v3[62];
    v14[0] = v4;
    v14[2] = v5;
    v6 = off_103EDFEC();
    v7 = v2[297];
    v8 = *(_DWORD *)(v7 + 264);
    v12 = v6 + 50.0;
    v11 = v6 - 50.0;
    v9 = (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*v3 + 36))(
           v3,
           v14,
           0.30000001,
           LODWORD(v11),
           LODWORD(v12),
           800.0,
           0.5);
    (*(void (__thiscall **)(int, int))(v8 + 16))(v7 + 264, v9);
    v13 = *((float *)off_103DC81C + 3) + 0.01;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 408))(v3, LODWORD(v13));
    v2 = v15;
  }
  return sub_1003CD40(v2, a2);
}
