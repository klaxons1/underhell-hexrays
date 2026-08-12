__int16 __thiscall sub_100018B0(int this)
{
  __int16 result; // ax
  int v3; // edx
  int v4; // edi
  const char *v5; // edi
  int v6; // edx
  char *v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  int v14; // edi
  int v15; // ebx
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ebx
  int v21; // edi
  int *v22; // esi
  char Buffer[256]; // [esp+4h] [ebp-12Ch] BYREF
  int v24; // [esp+104h] [ebp-2Ch] BYREF
  int v25; // [esp+108h] [ebp-28h] BYREF
  int *v26; // [esp+10Ch] [ebp-24h]
  int v27; // [esp+110h] [ebp-20h] BYREF
  double v28; // [esp+114h] [ebp-1Ch] BYREF
  int v29; // [esp+11Ch] [ebp-14h] BYREF
  int v30; // [esp+120h] [ebp-10h] BYREF
  int v31; // [esp+124h] [ebp-Ch]
  int v32; // [esp+128h] [ebp-8h]
  int v33; // [esp+12Ch] [ebp-4h]

  result = 0;
  if ( *(_WORD *)(this + 338) )
  {
    v3 = *(_DWORD *)(this + 44);
    v4 = 5 * *(unsigned __int16 *)(this + 332);
    *(float *)(this + 300) = *((float *)off_103DC81C + 3) + 10.0;
    v5 = (const char *)(*(_DWORD *)(this + 320) + (v4 << 8));
    v26 = (int *)(this + 320);
    v33 = (int)(v5 + 256);
    (*(void (__thiscall **)(int, const char *, const char *))(v3 + 832))(this + 44, "heading", v5 + 256);
    v6 = *(_DWORD *)(this + 44);
    v31 = (int)(v5 + 766);
    (*(void (__thiscall **)(int, const char *, const char *))(v6 + 832))(this + 44, "title", v5 + 766);
    if ( v5 && *v5 )
    {
      v7 = sub_100010E0(Buffer, "achievements/%s.vmt", v5);
      (*(void (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 316) + 768))(*(_DWORD *)(this + 316), v7);
    }
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 304) + 820))(*(_DWORD *)(this + 304));
    v9 = *(_DWORD *)(this + 308);
    v24 = v8;
    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 820))(v9);
    v10 = sub_10076890(&v24, v33);
    v11 = sub_10076890(&v25, v31);
    v32 = v10;
    if ( v10 <= v11 )
      v32 = v11;
    v28 = (double)v32;
    v33 = sub_10076740();
    v12 = v28;
    if ( v28 >= (double)v33 * 0.0015625 * 300.0 )
    {
      v33 = sub_10076740();
      v12 = (double)v33 * 0.0015625 * 300.0;
    }
    v13 = *(_DWORD *)(this + 316);
    v32 = (int)v12;
    v14 = sub_102374C0(v13);
    v33 = v14;
    v31 = sub_10076740();
    v15 = (int)((double)v31 * 0.0015625 * 10.0);
    v16 = v32 + v15 + v14 + 2 * v15;
    v17 = sub_102374C0(this + 44);
    v18 = *(_DWORD *)(this + 312);
    v29 = v17 - v16;
    v19 = v15 + v17 - v16;
    v20 = v33 + v19 + v15;
    v30 = v19;
    v31 = v18;
    sub_10236170((char *)&v28 + 4, &v27);
    sub_10236140(v29, v27);
    sub_10239D70(v16);
    sub_10236170((char *)&v28 + 4, &v29);
    sub_10236140(v30, v29);
    sub_10239D70(v33);
    sub_10236170((char *)&v28 + 4, &v30);
    sub_10236140(v20, v30);
    sub_10239D70(v32);
    sub_10236170((char *)&v28 + 4, &v30);
    sub_10236140(v20, v30);
    sub_10239D70(v32);
    v21 = *(unsigned __int16 *)(this + 332);
    v22 = v26;
    sub_100013F0(v26, v21);
    result = *((_WORD *)v22 + 8);
    *(_WORD *)(1280 * v21 + *v22 + 1278) = result;
    *((_WORD *)v22 + 8) = v21;
  }
  else
  {
    *(float *)(this + 300) = 0.0;
  }
  return result;
}
