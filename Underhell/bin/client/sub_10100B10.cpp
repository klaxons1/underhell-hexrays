int __thiscall sub_10100B10(_WORD *this, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // eax
  int v5; // esi
  int result; // eax
  void (*v7)(void); // eax
  int v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // ecx
  int *v12; // eax
  int *v13; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // [esp+8h] [ebp-18h] BYREF
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  _DWORD *v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v3 = a3;
  v4 = a3[1];
  v19 = this;
  if ( v4 == -1 )
  {
    v5 = 0;
    v20 = 0;
  }
  else if ( *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 2) == v4 >> 12 )
  {
    v20 = *((_DWORD *)off_103DCD74 + 4 * (v4 & 0xFFF) + 1);
    v5 = v20;
  }
  else
  {
    v20 = 0;
    v5 = 0;
  }
  v16 = v5;
  result = (unsigned __int16)sub_100FB520(this + 16, (int)&v16);
  v18 = result;
  if ( (_WORD)result != 0xFFFF )
  {
    v7 = *(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100);
    v17 = dword_1047CA8C;
    v7();
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 204))(v5) && (v8 = a3[3], v8 > 0) )
    {
      v9 = v19;
      v10 = (_DWORD *)sub_100FD050(*(_DWORD **)(v19[9] + 16 * (unsigned __int16)v18 + 12), a3[2]);
      if ( v10 )
      {
        v11 = v10[3];
        if ( v8 < v11 )
          v11 = v8;
        if ( *v10 == 1 && v11 == 1 )
        {
          sub_100FCE70(v9, a2, (int)a3, (int)v10, 1);
          return (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 104))(v17);
        }
        v12 = (int *)v10[13];
        if ( v11 > 0 )
        {
          v13 = v12;
          v18 = v11;
          do
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
            sub_100FCB50(a2, v3, (int)v13, 0);
            (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 32))(a2);
            if ( *v3 == 8 )
            {
              v14 = *v13;
              if ( *v13 )
              {
                v15 = __RTDynamicCast(
                        v20,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                        (int)&IMotionEvent `RTTI Type Descriptor',
                        0);
                if ( v15 )
                  (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 4))(v14, v15);
              }
              v3 = a3;
            }
            ++v13;
            --v18;
          }
          while ( v18 );
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 228))(v5);
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 104))(v17);
  }
  return result;
}
