void __thiscall sub_1010A950(int this, int a2, int a3, int a4, int a5)
{
  bool v6; // zf
  int v7; // ecx
  __int16 v8; // dx
  int v9; // ecx
  size_t v10; // eax
  _DWORD *v11; // ebx
  float *v12; // edi
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  size_t v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // [esp+4h] [ebp-14h] BYREF
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  size_t Size; // [esp+14h] [ebp-4h]
  char v26; // [esp+28h] [ebp+10h]
  int v27; // [esp+28h] [ebp+10h]
  BOOL v28; // [esp+28h] [ebp+10h]
  int v29; // [esp+28h] [ebp+10h]
  int v30; // [esp+28h] [ebp+10h]
  int v31; // [esp+28h] [ebp+10h]
  int v32; // [esp+28h] [ebp+10h]
  int v33; // [esp+28h] [ebp+10h]
  int v34; // [esp+28h] [ebp+10h]
  int v35; // [esp+28h] [ebp+10h]
  int v36; // [esp+28h] [ebp+10h]
  int v37; // [esp+2Ch] [ebp+14h]
  bool v38; // [esp+2Fh] [ebp+17h]

  v6 = *(_DWORD *)(this + 28) == 0;
  *(_DWORD *)(this + 32) = a3;
  if ( v6 )
    *(_DWORD *)(this + 28) = *(_DWORD *)(a3 + 8);
  if ( a5 > 0 )
  {
    v7 = a4 + 40;
    v24 = a4 + 40;
    v23 = a5;
    do
    {
      *(_DWORD *)(this + 24) = v7 - 40;
      v8 = *(_WORD *)(v7 - 22);
      v26 = v8;
      if ( *(_DWORD *)v7 )
        *(_DWORD *)(*(_DWORD *)v7 + 44) = a2;
      v9 = *(_DWORD *)(this + 24);
      v22 = v9;
      if ( *(_DWORD *)(v9 + 44) != a2
        && (*(_DWORD *)v9 == 10
         || (v8 & 0x200) == 0
         && (*(_DWORD *)this != 1 || (v8 & 0x100) == 0)
         && (*(_DWORD *)this != 2 || (v8 & 0x100) != 0)) )
      {
        v10 = *(unsigned __int16 *)(v9 + 16);
        v11 = (_DWORD *)(*(_DWORD *)(this + 4) + *(_DWORD *)(v9 + 4 * *(_DWORD *)(this + 12) + 8));
        v12 = (float *)(*(_DWORD *)(this + 8) + *(_DWORD *)(v9 + 4 * *(_DWORD *)(this + 16) + 8));
        v6 = *(_DWORD *)(this + 52) == v9;
        *(_BYTE *)(this + 36) = *(_BYTE *)(this + 21);
        *(_BYTE *)(this + 37) = 1;
        v13 = *(_DWORD *)v9;
        v38 = v6;
        Size = v10;
        switch ( v13 )
        {
          case 0:
          case 11:
          case 12:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 21:
          case 26:
            break;
          case 1:
            v27 = sub_1010A520(this, (int)v11, v12, v10);
            sub_1010A4C0((_BYTE *)this, v27, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_10109AE0((_BYTE *)this, v27, (float *)v11, v12, Size);
            if ( v38 )
              sub_10109FA0((_DWORD *)this, v27, (float *)v11, (int)v12, Size);
            break;
          case 2:
            v28 = sub_1010A600(this, (const char *)v11, (const char *)v12);
            sub_1010A5C0((_BYTE *)this, v28, v11, v12);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_10109B40((_BYTE *)this, v28, (const char *)v11, (const char *)v12);
            if ( v38 )
              sub_10109FD0((_DWORD *)this, v28, (const char *)v11, (int)v12);
            break;
          case 3:
            v29 = sub_1010A6C0(this, (float *)v11, (int)v12, v10);
            sub_1010A660((_BYTE *)this, v29, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_1010A000((_BYTE *)this, v29, (float *)v11, v12, Size);
            if ( v38 )
              sub_1010A0A0((_DWORD *)this, v29, (float *)v11, (int)v12, Size);
            break;
          case 4:
            v30 = sub_1010A7B0(this, (int)v11, v12, v10);
            sub_1010A690((_BYTE *)this, v30, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_1010A0E0((_BYTE *)this, v30, (float *)v11, (double *)v12, Size);
            if ( v38 )
              sub_1010A260((_DWORD *)this, v30, (float *)v11, (int)v12, Size);
            break;
          case 5:
            v33 = sub_10109BF0(this, (int)v11, v12, v10);
            sub_1010A4C0((_BYTE *)this, v33, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_101099A0(this, v33, v11, v12, Size);
            if ( v38 )
              sub_10109ED0((_DWORD *)this, v33, v11, (int)v12, Size);
            break;
          case 6:
            v32 = sub_10109C80(this, (int)v11, v12, v10);
            sub_1010A4F0((_BYTE *)this, v32, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_10109A70((_BYTE *)this, v32, v11, v12, Size);
            if ( v38 )
              sub_10109F70((_DWORD *)this, v32, v11, (int)v12, Size);
            break;
          case 7:
            v34 = sub_10109B90(this, (int)v11, v12, v10);
            sub_1010A490((_BYTE *)this, v34, v11, v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_10109950((_BYTE *)this, v34, (__int16 *)v11, (__int16 *)v12, Size);
            if ( v38 )
              sub_10109EA0((_DWORD *)this, v34, (__int16 *)v11, (int)v12, Size);
            break;
          case 8:
            v19 = sub_10109880(this, v10, v11, v12);
            v35 = v19;
            if ( *(_BYTE *)(this + 44) && v19 != 1 )
            {
              memcpy_0(v11, v12, Size);
              v19 = v35;
            }
            v6 = *(_BYTE *)(this + 20) == 0;
            v20 = *(char *)v12;
            v22 = *(char *)v11;
            v21 = v20;
            if ( !v6 && *(_BYTE *)(this + 37) )
            {
              sub_101099A0(this, v19, &v22, &v21, Size);
              v19 = v35;
            }
            if ( v38 )
              goto LABEL_49;
            break;
          case 9:
            Size = 4 * v10;
            v19 = sub_10109880(this, 4 * v10, v11, v12);
            v31 = v19;
            if ( *(_BYTE *)(this + 44) && v19 != 1 )
            {
              memcpy_0(v11, v12, Size);
              v19 = v31;
            }
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
            {
              sub_10109910((_BYTE *)this, v19, Size, (int)v11, (int)v12);
              v19 = v31;
            }
            if ( v38 )
LABEL_49:
              sub_10109E70((_DWORD *)this, v19, Size, (int)v11, (int)v12);
            break;
          case 10:
            v14 = *(_DWORD *)(this + 8);
            Size = *(_DWORD *)(this + 4);
            v15 = *(_DWORD *)(this + 28);
            v21 = v14;
            v37 = v15;
            *(_DWORD *)(this + 28) = *(_DWORD *)(*(_DWORD *)(v9 + 32) + 8);
            *(_DWORD *)(this + 8) = v12;
            if ( (v26 & 0x40) != 0 && !*(_DWORD *)(this + 16) )
              *(float *)(this + 8) = *v12;
            *(_DWORD *)(this + 4) = v11;
            if ( (v26 & 0x40) != 0 && !*(_DWORD *)(this + 12) )
              *(_DWORD *)(this + 4) = *v11;
            sub_1010A950(a2, a3, **(_DWORD **)(v9 + 32), *(_DWORD *)(*(_DWORD *)(v9 + 32) + 4));
            v16 = v22;
            v17 = Size;
            *(_DWORD *)(this + 28) = v37;
            v18 = v21;
            *(_DWORD *)(this + 24) = v16;
            *(_DWORD *)(this + 4) = v17;
            *(_DWORD *)(this + 8) = v18;
            break;
          case 13:
            v36 = sub_1010A8A0(this, (int)v11, v12, v10);
            sub_10109CD0((_BYTE *)this, v36, v11, (int)v12, Size);
            if ( *(_BYTE *)(this + 20) && *(_BYTE *)(this + 37) )
              sub_1010A2A0((_BYTE *)this, v36, v11, v12, Size);
            if ( v38 )
              sub_1010A3D0((_DWORD *)this, v36, v11, (int)v12, Size);
            break;
          default:
            Warning("Bad field type\n");
            break;
        }
      }
      v7 = v24 + 52;
      v6 = v23-- == 1;
      v24 += 52;
    }
    while ( !v6 );
  }
  *(_DWORD *)(this + 28) = 0;
}
