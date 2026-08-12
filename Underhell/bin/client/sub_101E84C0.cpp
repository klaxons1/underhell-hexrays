void __thiscall sub_101E84C0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // edi
  Concurrency::details::VirtualProcessor *v7; // eax
  signed int v8; // ebp
  int *v9; // edi
  int v10; // esi
  int v11; // ebp
  int *v12; // edi
  int v13; // esi
  int v15; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  v3 = this;
  v4 = 0;
  for ( i = 0; v4 < v3[9]; i = v4 )
  {
    v5 = *(_DWORD *)(v3[6] + 4 * v4);
    v17 = v5;
    if ( v5 )
    {
      v6 = 0;
      v15 = 0;
      if ( sub_101EA900(v5) > 0 )
      {
        do
        {
          v7 = (Concurrency::details::VirtualProcessor *)sub_101EA910(v6);
          if ( v7 )
          {
            v8 = Concurrency::details::VirtualProcessor::GetMaskId(v7) - 1;
            if ( v8 >= 0 )
            {
              do
              {
                v9 = (int *)sub_101EAE80(v8);
                if ( v9 )
                {
                  v10 = 0;
                  if ( a3 <= 0 )
                  {
LABEL_10:
                    sub_101EB7A0(v9);
                    sub_101E7A40(this, v9);
                  }
                  else
                  {
                    while ( sub_101E1B20((unsigned __int8 *)v9) != *(_DWORD *)(a2 + 4 * v10) )
                    {
                      if ( ++v10 >= a3 )
                        goto LABEL_10;
                    }
                  }
                }
                --v8;
              }
              while ( v8 >= 0 );
              v6 = v15;
              v5 = v17;
            }
          }
          v15 = ++v6;
        }
        while ( v6 < sub_101EA900(v5) );
        v3 = this;
        v4 = i;
      }
    }
    ++v4;
  }
  v11 = v3[4] - 1;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      v12 = *(int **)(v3[1] + 4 * v11);
      if ( !Concurrency::details::SchedulerProxy::GetNumExternalThreads((Concurrency::details::SchedulerProxy *)v12) )
      {
        v13 = 0;
        if ( a3 <= 0 )
        {
LABEL_23:
          sub_101E7A40(this, v12);
        }
        else
        {
          while ( sub_101E1B20((unsigned __int8 *)v12) != *(_DWORD *)(a2 + 4 * v13) )
          {
            if ( ++v13 >= a3 )
              goto LABEL_23;
          }
        }
      }
      if ( --v11 < 0 )
        break;
      v3 = this;
    }
  }
}
