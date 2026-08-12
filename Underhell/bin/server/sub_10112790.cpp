void __thiscall sub_10112790(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  unsigned int *v11; // eax
  int *v12; // eax
  char *v13; // eax
  int v14; // [esp+4h] [ebp-1Ch] BYREF
  int v15; // [esp+8h] [ebp-18h]
  int v16; // [esp+Ch] [ebp-14h]
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  unsigned int v19; // [esp+18h] [ebp-8h]
  _DWORD *v20; // [esp+1Ch] [ebp-4h]
  int *v21; // [esp+28h] [ebp+8h]

  v2 = this;
  v20 = this;
  if ( (a2 & 0x13) != 0 )
  {
    v3 = 0;
    if ( !this[9] || this[9] != GetCurrentThreadId() )
    {
      if ( *((_WORD *)v2 + 4) && !CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10)) )
      {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)(v2 + 5));
        v2[9] = GetCurrentThreadId();
        v4 = sub_100FE140(v2 + 1);
        if ( v4 )
        {
          while ( 1 )
          {
            v5 = *(_DWORD *)v4;
            v19 = *(_DWORD *)(v4 + 4);
            v21 = (int *)v5;
            sub_100FE090(v20 + 3, (int *)v4);
            v4 = (int)v21;
            if ( v19 != -1 )
            {
              v6 = &dword_1069E3E4[4 * (v19 & 0xFFF)];
              if ( v6[1] == v19 >> 12 )
              {
                v7 = *v6;
                if ( v7 )
                {
                  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
                  if ( v8 )
                  {
                    if ( (*(_DWORD *)(v8 + 252) & 8) != 0 )
                    {
                      v9 = v3;
                      if ( v3 + 1 > v15 )
                      {
                        sub_102ABFC0(v3 - v15 + 1);
                        v3 = v17;
                      }
                      v10 = v14;
                      v17 = ++v3;
                      v18 = v14;
                      if ( v3 - v9 - 1 > 0 )
                      {
                        memcpy((void *)(v14 + 4 * v9 + 4), (const void *)(v14 + 4 * v9), 4 * (v3 - v9 - 1));
                        v10 = v14;
                      }
                      v11 = (unsigned int *)(v10 + 4 * v9);
                      if ( v11 )
                        *v11 = v19;
                    }
                    else
                    {
                      sub_10112120((_DWORD *)(v8 + 320));
                    }
                  }
                }
              }
            }
            if ( !v21 )
            {
              v2 = v20;
              v4 = sub_100FE140(v20 + 1);
              if ( !v4 )
                break;
            }
          }
          if ( v3 > 0 )
          {
            do
            {
              v12 = sub_100FE100(v2 + 3);
              if ( !v12 )
              {
                v12 = (int *)sub_10184390(8);
                if ( v12 )
                  v12[1] = -1;
                else
                  v12 = 0;
              }
              v12[1] = *(_DWORD *)(v14 + 4 * v4);
              sub_100FE090(v2 + 1, v12);
              ++v4;
            }
            while ( v4 < v3 );
          }
        }
        v2[9] = 0;
        CThreadSpinRWLock::UnlockWrite((CThreadSpinRWLock *)(v2 + 5));
        sub_102375F0(&v14);
      }
      if ( !CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10)) )
        CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)(v2 + 5));
      v13 = (char *)CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10));
      CThreadLocalBase::Set((CThreadLocalBase *)(v2 + 10), v13 + 1);
    }
  }
}
