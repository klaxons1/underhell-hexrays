char *__thiscall sub_100E7450(int this, char a2, int a3)
{
  int v4; // ecx
  char *result; // eax
  unsigned __int16 i; // si
  int v7; // ebx
  rsize_t v8; // esi
  rsize_t v9; // eax
  char *v10; // ecx
  int v11; // eax
  char *v12; // esi
  signed int v13; // ebx
  signed int v14; // esi
  unsigned __int16 *v15; // ebx
  unsigned __int16 *v16; // ebx
  int v17; // ecx
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  const char *v21; // [esp+0h] [ebp-23Ch]
  _BYTE v22[512]; // [esp+Ch] [ebp-230h] BYREF
  char v23; // [esp+20Ch] [ebp-30h] BYREF
  signed int j; // [esp+210h] [ebp-2Ch]
  int Context; // [esp+214h] [ebp-28h] BYREF
  char *v26; // [esp+218h] [ebp-24h]
  void *Base; // [esp+21Ch] [ebp-20h] BYREF
  signed int v28; // [esp+220h] [ebp-1Ch]
  int v29; // [esp+224h] [ebp-18h]
  rsize_t NumOfElements; // [esp+228h] [ebp-14h]
  void *v31; // [esp+22Ch] [ebp-10h]
  int v32; // [esp+230h] [ebp-Ch]
  char v33; // [esp+234h] [ebp-8h]
  char v34; // [esp+23Bh] [ebp-1h]
  int v35; // [esp+244h] [ebp+8h]
  bool v36; // [esp+247h] [ebp+Bh]

  v4 = this + 4;
  if ( a2 )
  {
    result = (char *)sub_100DB750(v4);
    for ( i = (unsigned __int16)result; (unsigned __int16)result != 0xFFFF; i = (unsigned __int16)result )
    {
      (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_10700A38 + 144))(
        dword_10700A38,
        *(_DWORD *)(this + 8) + 24 * i + 8,
        v22,
        512);
      sub_100E7320(this, (int)v22);
      result = (char *)sub_100DE190((_DWORD *)(this + 4), i);
    }
  }
  else
  {
    Base = 0;
    v28 = 0;
    v29 = 0;
    NumOfElements = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v7 = (unsigned __int16)sub_100DB750(v4);
    if ( v7 == 0xFFFF )
      return (char *)sub_102375F0(&Base);
    do
    {
      v8 = NumOfElements;
      Context = *(_DWORD *)(*(_DWORD *)(this + 8) + 24 * (unsigned __int16)v7 + 8);
      v9 = NumOfElements;
      v33 = 1;
      if ( (int)(NumOfElements + 1) > v28 )
      {
        sub_10226330(NumOfElements - v28 + 1);
        v9 = NumOfElements;
      }
      v10 = (char *)Base;
      NumOfElements = v9 + 1;
      v11 = v9 - v8;
      v31 = Base;
      if ( v11 > 0 )
      {
        memcpy((char *)Base + 8 * v8 + 8, (char *)Base + 8 * v8, 8 * v11);
        v10 = (char *)Base;
      }
      v12 = &v10[8 * v8];
      if ( v12 )
      {
        *(_DWORD *)v12 = Context;
        *((_DWORD *)v12 + 1) = v7;
      }
      v7 = (unsigned __int16)sub_100DE190((_DWORD *)(this + 4), v7);
    }
    while ( v7 != 0xFFFF );
    v13 = NumOfElements;
    if ( v33 )
    {
      v33 = 0;
      if ( (int)NumOfElements > 1 )
      {
        Context = v32;
        v26 = &v23;
        qsort_s(Base, NumOfElements, 8u, sub_100D7970, &Context);
      }
    }
    if ( v13 )
    {
      result = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10700A38 + 20))(dword_10700A38);
      v14 = 0;
      v34 = (char)result;
      if ( v13 > 0 )
      {
        do
        {
          v15 = (unsigned __int16 *)((char *)Base + 8 * v14 + 4);
          v35 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 352))(
                  dword_10700A38,
                  *(_DWORD *)(this + 8) + 24 * *v15 + 8);
          for ( j = v14; j < (int)NumOfElements; ++j )
          {
            if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10700A38 + 352))(
                   dword_10700A38,
                   *(_DWORD *)(this + 8) + 24 * *v15 + 8) != v35 )
              break;
            v15 += 4;
          }
          v16 = (unsigned __int16 *)((char *)Base + 8 * v14 + 4);
          (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_10700A38 + 144))(
            dword_10700A38,
            *(_DWORD *)(this + 8) + 24 * *v16 + 8,
            v22,
            512);
          sub_104298D0(v22);
          v36 = 1;
          if ( (*(_BYTE *)(this + 72) & 1) != 0 )
          {
            v36 = 0;
          }
          else if ( !v34 )
          {
            v36 = (*(int (__thiscall **)(int, _BYTE *, const char *))(*(_DWORD *)dword_10700A38 + 356))(
                    dword_10700A38,
                    v22,
                    "GAME") > a3;
          }
          result = (char *)j;
          if ( v14 < j )
          {
            v26 = (char *)(j - v14);
            do
            {
              v17 = *(_DWORD *)(this + 8);
              v18 = v17 + 24 * *v16 + 8;
              if ( *(_DWORD *)(v17 + 24 * *v16 + 16) == -2 )
              {
                if ( v36 )
                {
                  (*(void (__thiscall **)(int, int, _BYTE *, int, const char *))(*(_DWORD *)dword_10700A38 + 144))(
                    dword_10700A38,
                    v18,
                    v22,
                    512,
                    v21);
                  v19 = dword_10700A38 + 4;
                  v21 = "GAME";
                  if ( *(_DWORD *)(this + 68) == 1 )
                  {
                    v20 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v19 + 24))(v19, v22);
                    *(_DWORD *)(v18 + 8) = v20;
                    if ( v20 == -1 )
                      *(_DWORD *)(v18 + 8) = 0;
                  }
                  else
                  {
                    *(_DWORD *)(v18 + 8) = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v19 + 52))(v19, v22);
                  }
                }
                else
                {
                  *(_DWORD *)(v18 + 8) = *(_DWORD *)(v18 + 4);
                }
              }
              v16 += 4;
              --v26;
            }
            while ( v26 );
            result = (char *)j;
          }
          v14 = (signed int)(result + 1);
        }
        while ( (int)(result + 1) < (int)NumOfElements );
      }
      if ( v29 >= 0 )
      {
        result = (char *)Base;
        if ( Base )
          return (char *)(*(int (__thiscall **)(_DWORD, void *))(*g_pMemAlloc + 20))(g_pMemAlloc, Base);
      }
    }
    else
    {
      return (char *)sub_102375F0(&Base);
    }
  }
  return result;
}
