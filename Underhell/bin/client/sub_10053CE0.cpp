int __usercall sub_10053CE0@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  float v14; // [esp+10h] [ebp-34h]
  float v15; // [esp+14h] [ebp-30h]
  float v16; // [esp+18h] [ebp-2Ch]
  float v17; // [esp+1Ch] [ebp-28h]
  int v18; // [esp+30h] [ebp-14h] BYREF
  int v19; // [esp+34h] [ebp-10h]
  int v20; // [esp+38h] [ebp-Ch]
  int v21; // [esp+3Ch] [ebp-8h]
  int v22; // [esp+40h] [ebp-4h]

  sub_10053B20(a1, a2, 0, a4, a5, a6, a7, 0, &v18);
  v7 = sub_101163A0(0);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v9 = v8;
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  v10 = *(_DWORD *)v9;
  v11 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v7 + 16))(v7, 0, 1, 1);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, v11);
  v22 = v21 + v19 - 1;
  v17 = (float)v22;
  v22 = v20 + v18 - 1;
  v16 = (float)v22;
  v15 = (float)v19;
  v14 = (float)v18;
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(v10 + 412))(
    v9,
    a3,
    a4,
    a5,
    a6,
    a7,
    LODWORD(v14),
    LODWORD(v15),
    LODWORD(v16),
    LODWORD(v17),
    v12);
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
}
