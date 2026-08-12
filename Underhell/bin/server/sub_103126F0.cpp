char __userpurge sub_103126F0@<al>(int a1@<ecx>, double a2@<st0>, int a3, int a4, int a5)
{
  unsigned int v6; // eax
  unsigned int *v7; // ebx
  int *v8; // ecx
  int v9; // ecx
  char result; // al
  int v12; // ecx
  int v13; // eax
  char v14; // bl
  float v15; // [esp+10h] [ebp+8h]

  v6 = *(_DWORD *)(a1 + 3756);
  v7 = (unsigned int *)(a1 + 3756);
  if ( v6 == -1 || (v8 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3756) & 0xFFF) + 1], v8[1] != v6 >> 12) )
    v9 = 0;
  else
    v9 = *v8;
  if ( *(_BYTE *)(v9 + 224) || sub_10312580((_DWORD *)a1) || *(_BYTE *)(a1 + 3764) )
    return 0;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1004BCD0((float *)(a1 + 580), (float *)(a3 + 580));
  if ( *v7 == -1 || off_1061BE18[4 * (*v7 & 0xFFF) + 2] != *v7 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*v7 & 0xFFF) + 1];
  v15 = a2;
  if ( sub_10412ED0(v12) < v15 )
    return 0;
  v13 = sub_1026A890(v7);
  v14 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v13 + 548))(v13, a3, a4, a5);
  if ( v14 && a3 == (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    *(float *)(a1 + 3760) = *(float *)(dword_106B31C8 + 12);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 220))(a3) != 6 )
  {
    return v14;
  }
  if ( v14 )
    return v14;
  result = 1;
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 3760) > 4.0 )
    return v14;
  return result;
}
