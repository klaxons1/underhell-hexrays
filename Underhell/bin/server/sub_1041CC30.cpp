_DWORD *__fastcall sub_1041CC30(_DWORD *a1)
{
  _DWORD *result; // eax
  int v3; // edi
  int v4; // ebp
  int v5; // esi
  Concurrency::details::VirtualProcessor *v6; // eax
  Concurrency::details::VirtualProcessor *v7; // esi
  signed int v8; // edi
  unsigned __int8 *v9; // eax
  int v10; // eax
  int v11; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  result = a1 + 130;
  if ( a1 != (_DWORD *)-520 )
    *result = 0;
  v3 = 0;
  for ( i = 0; v3 < a1[9]; i = v3 )
  {
    result = (_DWORD *)a1[6];
    v4 = result[v3];
    if ( v4 )
    {
      v5 = 0;
      v11 = 0;
      result = (_DWORD *)sub_1041EEE0(result[v3]);
      if ( (int)result > 0 )
      {
        do
        {
          v6 = (Concurrency::details::VirtualProcessor *)sub_1041EEF0(v5);
          v7 = v6;
          if ( v6 )
          {
            v8 = 0;
            if ( (int)Concurrency::details::VirtualProcessor::GetMaskId(v6) > 0 )
            {
              do
              {
                v9 = (unsigned __int8 *)sub_1041F430(v8);
                if ( v9 )
                {
                  v10 = sub_10418360(v9);
                  a1[(v10 >> 5) + 130] |= 1 << (v10 & 0x1F);
                }
                ++v8;
              }
              while ( v8 < (int)Concurrency::details::VirtualProcessor::GetMaskId(v7) );
            }
          }
          v5 = ++v11;
          result = (_DWORD *)sub_1041EEE0(v4);
        }
        while ( v11 < (int)result );
        v3 = i;
      }
    }
    ++v3;
  }
  return result;
}
