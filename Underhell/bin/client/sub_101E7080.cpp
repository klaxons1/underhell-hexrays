void __thiscall sub_101E7080(int *this)
{
  int v1; // ebx
  int v3; // esi
  int v4; // edi
  Concurrency::details::VirtualProcessor *v5; // eax
  Concurrency::details::VirtualProcessor *v6; // edi
  signed int v7; // ebx
  char *v8; // eax
  char *v9; // esi
  char *v10; // eax
  int v11; // eax
  const char *v12; // eax
  const char *v13; // [esp-4h] [ebp-28h]
  char *v14; // [esp+0h] [ebp-24h]
  float v15; // [esp+0h] [ebp-24h]
  const char *v16; // [esp+0h] [ebp-24h]
  int v17; // [esp+14h] [ebp-10h]
  int i; // [esp+18h] [ebp-Ch]
  float v19; // [esp+1Ch] [ebp-8h]
  int v20; // [esp+20h] [ebp-4h]

  v1 = 0;
  for ( i = 0; v1 < this[9]; i = v1 )
  {
    v3 = *(_DWORD *)(this[6] + 4 * v1);
    v20 = v3;
    if ( v3 )
    {
      v4 = 0;
      v17 = 0;
      if ( sub_101EA900(v3) > 0 )
      {
        do
        {
          v5 = (Concurrency::details::VirtualProcessor *)sub_101EA910(v4);
          v6 = v5;
          if ( v5 )
          {
            v7 = 0;
            if ( (int)Concurrency::details::VirtualProcessor::GetMaskId(v5) > 0 )
            {
              do
              {
                v8 = (char *)sub_101EAE80(v7);
                v9 = v8;
                if ( v8 && sub_101E1FA0(v8) )
                {
                  v14 = (char *)sub_101E2010(v9);
                  v10 = (char *)sub_101E2020(v9);
                  v11 = sub_101E69E0(this, v10, v14);
                  if ( v11 )
                  {
                    v19 = sub_101E2360(v11);
                    v15 = v19 - sub_10103A90((float *)v9);
                    sub_101E1D00((float *)v9, v15);
                  }
                  else
                  {
                    v16 = (const char *)sub_101E2010(v9);
                    v13 = (const char *)sub_101E2020(v9);
                    v12 = (const char *)sub_101E1B70(v9);
                    sub_101E5F90((int)this, 0, "Event %s was missing tag %s for wav %s\n", v12, v13, v16);
                    sub_101E1FB0(v9, 0, (void *)Locale, (void *)Locale);
                  }
                }
                ++v7;
              }
              while ( v7 < (int)Concurrency::details::VirtualProcessor::GetMaskId(v6) );
              v3 = v20;
            }
          }
          v4 = ++v17;
        }
        while ( v17 < sub_101EA900(v3) );
        v1 = i;
      }
    }
    ++v1;
  }
}
