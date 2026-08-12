int __thiscall sub_1022ED50(void *this, _DWORD *a2, int a3, int a4, float a5)
{
  _DWORD *v5; // ebx
  int v6; // edi
  int result; // eax
  int v8; // esi
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  int v14; // ebx
  char *v15; // eax
  int v16; // eax
  double v17; // st7
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  int v21; // edi
  _WORD *v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  int v27; // [esp+0h] [ebp-68h]
  float v28; // [esp+0h] [ebp-68h]
  char Destination[64]; // [esp+10h] [ebp-58h] BYREF
  __int16 v30; // [esp+50h] [ebp-18h] BYREF
  float v31; // [esp+54h] [ebp-14h]
  int v32; // [esp+58h] [ebp-10h]
  void *v33; // [esp+5Ch] [ebp-Ch]
  int v34; // [esp+62h] [ebp-6h] BYREF

  v5 = a2;
  v33 = this;
  v6 = 0;
  v32 = 0;
  result = sub_1016BFC0(a2);
  if ( result > 0 )
  {
    v8 = a4;
    do
    {
      v9 = sub_1041CBF0(v6);
      v10 = v9;
      if ( v9 )
      {
        v11 = sub_10418360(v9);
        if ( v11 == 5 )
        {
          v15 = (char *)sub_104183D0(v10);
          sub_104299C0(Destination, v15, 0x40u);
          if ( !sub_10418880(v10) )
            sub_10418CD0(Destination, 0x40u);
          if ( *(_DWORD *)(dword_106B31C8 + 20) != 1
            || (v16 = sub_10261B20()) == 0
            || sub_102246A0(v10, v16, Destination, 0x40u) )
          {
            v30 = -1;
            v30 = *(_WORD *)sub_1042F910((int)&v34, Destination);
            v17 = sub_10418510(v10);
            v31 = v17 + a5;
            sub_10227990((_WORD *)v8, (int)&v30, (unsigned __int16 *)&v34 + 1, (_BYTE *)&a4 + 3);
            v18 = sub_10227A80(v8);
            v19 = HIWORD(v34);
            v20 = v18;
            v21 = 16 * v18;
            v22 = (_WORD *)(v21 + *(_DWORD *)(v8 + 4));
            v22[1] = -1;
            *v22 = -1;
            v22[2] = v19;
            v22[3] = 0;
            if ( v19 == 0xFFFF )
            {
              *(_WORD *)(v8 + 16) = v20;
            }
            else
            {
              v23 = *(_DWORD *)(v8 + 4);
              v24 = 2 * v19;
              if ( HIBYTE(a4) )
                *(_WORD *)(v23 + 8 * v24) = v20;
              else
                *(_WORD *)(v23 + 8 * v24 + 2) = v20;
            }
            sub_10229940(v8, v20);
            v25 = *(_DWORD *)(v8 + 4);
            ++*(_WORD *)(v8 + 18);
            v26 = v21 + v25 + 8;
            if ( v26 )
            {
              *(_WORD *)v26 = v30;
              *(float *)(v26 + 4) = v31;
            }
          }
        }
        else if ( v11 == 11 && !(unsigned __int8)sub_1041CAA0(v5) && !sub_104185B0(v10) )
        {
          if ( v33 )
            v12 = (int)v33 + 800;
          else
            v12 = 0;
          v27 = v12;
          v13 = (char *)sub_104183D0(v10);
          v14 = sub_1022A390(v13, v27);
          sub_1041CA80(1);
          sub_104185A0(v14);
          v28 = sub_10418510(v10);
          sub_1022ED50(v14, a3, v8, v28);
        }
      }
      v5 = a2;
      v6 = ++v32;
      result = sub_1016BFC0(a2);
    }
    while ( v6 < result );
  }
  return result;
}
