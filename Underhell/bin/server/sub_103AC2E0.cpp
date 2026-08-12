int __userpurge sub_103AC2E0@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v10[11]; // [esp+8h] [ebp-50h] BYREF
  unsigned int v11; // [esp+34h] [ebp-24h]
  float v12; // [esp+3Ch] [ebp-1Ch]

  sub_1001E4E0(v10, a3);
  if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) == 18 )
    v12 = v12 * 0.25;
  v5 = a1[906];
  if ( v5 )
    v6 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 200))(v5, v10);
  else
    v6 = sub_10035940(a1, a2, (int)v10);
  v7 = v6;
  if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
  if ( *(char *)(v8 + 256) < 0 )
    (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 1128))(a1, 1, 1, 0);
  return v7;
}
