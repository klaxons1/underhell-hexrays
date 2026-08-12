int __userpurge sub_10063400@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  _DWORD *v4; // edi
  unsigned int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // esi
  int v11; // eax
  __int16 *v12; // eax
  __int16 *v13; // eax
  float v15; // [esp+14h] [ebp-10h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "C_RopeKeyframe::DrawModel", 0, "Ropes", 0, 4);
  v4 = (_DWORD *)(a1 - 4);
  if ( !sub_100628C0(a1 - 4, a2) || !*(_BYTE *)(a1 + 116) )
    goto LABEL_17;
  if ( (*(_BYTE *)(a1 + 1244) & 1) != 0 )
  {
    v15 = (float)((v4[482] + v4[481] - 100) / (v4[317] - 1));
    sub_101165F0(v15);
  }
  v5 = *(_DWORD *)(a1 + 1904);
  v6 = a1 + 1904;
  if ( v5 == -1 )
    goto LABEL_18;
  v7 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(a1 + 1904) & 0xFFF) + 4);
  v8 = v5 >> 12;
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1904) & 0xFFF) + 2) != v8 || !*v7 )
    goto LABEL_18;
  v9 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1904) & 0xFFF) + 2) == v8 ? *v7 : 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v9 + 8) + 32))(v9 + 8)
    && (v10 = a1 + 1908, sub_1006BE10(v10))
    && (v11 = sub_1006BE10(v10), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v11 + 8) + 32))(v11 + 8))
    && (v12 = (__int16 *)sub_1006BE10(v6), sub_10034480(v12))
    && (v13 = (__int16 *)sub_1006BE10(v10), sub_10034480(v13)) )
  {
LABEL_17:
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  else
  {
LABEL_18:
    sub_100608A0((int)v4);
    (*(void (__thiscall **)(int *, _DWORD *))(dword_1040EE00 + 8))(&dword_1040EE00, v4);
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 1;
  }
}
