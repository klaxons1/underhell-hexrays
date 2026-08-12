int __userpurge sub_1011C290@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6, int a7)
{
  int result; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int (__thiscall *v13)(int, _DWORD); // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  float v17; // [esp+10h] [ebp-38h]
  float v18; // [esp+14h] [ebp-34h]
  float v19; // [esp+18h] [ebp-30h]
  float v20; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+30h] [ebp-18h] BYREF
  int v23; // [esp+34h] [ebp-14h]
  int v24; // [esp+38h] [ebp-10h]
  int v25; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]
  int v27; // [esp+44h] [ebp-4h]

  result = (*(int (__thiscall **)(_DWORD *))(*a1 + 20))(a1);
  if ( (_BYTE)result )
  {
    sub_10053B20((int)a1, a2, 0, a4, a5, a6, a7, 0, &v22);
    v9 = sub_101163A0(0);
    v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2, a3);
    v11 = v10;
    if ( v10 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
    v12 = a1[2];
    v13 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 16);
    v14 = *(_DWORD *)v11;
    v26 = v12;
    v15 = v13(v9, 0);
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 12))(v9, v15);
    v27 = v25 + v23 - 1;
    v20 = (float)v27;
    v27 = v24 + v22 - 1;
    v19 = (float)v27;
    v18 = (float)v23;
    v17 = (float)v22;
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(v14 + 412))(
      v11,
      v26,
      a4,
      a5,
      a6,
      a7,
      LODWORD(v17),
      LODWORD(v18),
      LODWORD(v19),
      LODWORD(v20),
      v16);
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
  }
  return result;
}
