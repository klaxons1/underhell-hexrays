int __userpurge sub_10047D40@<eax>(_BYTE *a1@<ecx>, int a2@<esi>, int a3)
{
  bool v4; // zf
  double v5; // st7
  int v7; // eax
  int v8; // eax
  int v9; // edx
  _BYTE *v10; // edi
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  float v17; // [esp+0h] [ebp-20h]
  _BYTE v18[12]; // [esp+8h] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  _BYTE *v21; // [esp+1Ch] [ebp-4h]
  int v22; // [esp+28h] [ebp+8h]

  v4 = a1[116] == 0;
  v21 = a1;
  if ( v4 )
    return 0;
  v19 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v20 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
    v5 = (double)v20 * 0.0039215689;
    if ( v5 <= 0.0 )
      return 0;
    v17 = v5;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(LODWORD(v17));
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)a1 + 56))(a1, v18);
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v18);
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v20 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  v8 = sub_100422D0();
  v9 = *((_DWORD *)a1 - 1);
  v10 = a1 - 4;
  v11 = v8;
  v12 = (*(int (__thiscall **)(_BYTE *, int))(v9 + 776))(v10, a2);
  if ( v11 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 880))(v11) )
  {
    v13 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v11 + 884))(v11, v10, a3);
  }
  else if ( v12 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 1308))(v12) )
  {
    v13 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v12 + 1312))(v12, v10, a3);
  }
  else
  {
    v13 = sub_10026910(v21, a3);
  }
  v14 = v20;
  v22 = v13;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 160))(v20, 0);
  if ( v19 )
  {
    v15 = *((_DWORD *)v21 + 498);
    if ( *((_DWORD *)v21 + 501) != v15 )
      *((_DWORD *)v21 + 501) = v15;
    if ( v12 )
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 1256))(v12, v10);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
  return v22;
}
