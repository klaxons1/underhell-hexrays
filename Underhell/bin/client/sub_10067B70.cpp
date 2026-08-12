void __thiscall sub_10067B70(int this, int a2)
{
  int v2; // ebx
  int v3; // esi
  Concurrency::details::SchedulerProxy *v4; // eax
  Concurrency::details::SchedulerProxy *v5; // edi
  unsigned int NumExternalThreads; // eax
  int v7; // esi
  unsigned __int16 v8; // ax
  _DWORD *v9; // esi
  char *v10; // eax
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int (__cdecl *v19)(int, int); // [esp+8h] [ebp-44h] BYREF
  int v20; // [esp+Ch] [ebp-40h]
  int v21; // [esp+10h] [ebp-3Ch]
  int v22; // [esp+14h] [ebp-38h]
  int v23; // [esp+18h] [ebp-34h]
  int v24; // [esp+1Ch] [ebp-30h]
  int v25; // [esp+20h] [ebp-2Ch]
  unsigned int v26; // [esp+24h] [ebp-28h] BYREF
  int v27; // [esp+2Ch] [ebp-20h] BYREF
  int v28; // [esp+30h] [ebp-1Ch]
  _DWORD *v29; // [esp+34h] [ebp-18h]
  int v30; // [esp+38h] [ebp-14h]
  int v31; // [esp+3Ch] [ebp-10h]
  int v32; // [esp+40h] [ebp-Ch]
  _DWORD *i; // [esp+44h] [ebp-8h] BYREF
  int j; // [esp+48h] [ebp-4h] BYREF

  v2 = a2;
  v3 = 0;
  v29 = (_DWORD *)this;
  if ( a2 && *(_BYTE *)(this + 1198) )
  {
    v19 = sub_100FACE0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0xFFFF;
    v24 = -1;
    v25 = 0;
    v31 = 0;
    v32 = 0;
    v30 = 0;
    if ( sub_10211330(a2) > 0 )
    {
      do
      {
        v4 = (Concurrency::details::SchedulerProxy *)sub_101E64E0(v3);
        v5 = v4;
        if ( v4 )
        {
          if ( (unsigned int)(sub_101E1B20(v4) - 6) <= 1 )
          {
            NumExternalThreads = Concurrency::details::SchedulerProxy::GetNumExternalThreads(v5);
            v7 = NumExternalThreads;
            j = NumExternalThreads;
            if ( NumExternalThreads )
            {
              v26 = NumExternalThreads;
              v8 = sub_100664E0(&v19, (int)&v26);
              if ( v8 == 0xFFFF )
              {
                v9 = (_DWORD *)sub_10065E70(v29, v7);
                i = v9;
                sub_10067AA0((int)&v19, &j, (int *)&i);
              }
              else
              {
                v9 = *(_DWORD **)(v20 + 16 * v8 + 12);
              }
              if ( v9 )
              {
                v10 = (char *)sub_101E1B90(v5);
                v11 = sub_10029D40(v9, v10);
                v28 = v11;
                if ( v11 >= 0 )
                {
                  if ( sub_10001EA0(v9) )
                  {
                    v12 = (_DWORD *)sub_10127960(v11);
                    v13 = 0;
                    v14 = v12;
                    for ( i = 0; v13 < v14[17]; i = (_DWORD *)v13 )
                    {
                      v15 = 0;
                      for ( j = 0; v15 < v14[18]; j = v15 )
                      {
                        v16 = v14[17];
                        if ( v13 >= v16 )
                          v13 = v16 - 1;
                        v17 = v14[18];
                        if ( j >= v17 )
                          v15 = v17 - 1;
                        v18 = sub_10127A00(v28, *(__int16 *)((char *)v14 + 2 * v13 + 2 * v15 * v16 + v14[15]));
                        sub_101278E0(v18);
                        ++v32;
                        v27 = 0;
                        if ( sub_10126D50(&v27) )
                          ++v31;
                        v13 = (int)i;
                        v15 = j + 1;
                      }
                      ++v13;
                    }
                  }
                }
                v2 = a2;
              }
            }
          }
        }
        v3 = ++v30;
      }
      while ( v3 < sub_10211330(v2) );
    }
    sub_100674E0((int)&v19);
  }
}
