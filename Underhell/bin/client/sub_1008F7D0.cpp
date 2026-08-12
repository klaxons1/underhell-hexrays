void __thiscall sub_1008F7D0(_DWORD *this, char a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int *v8; // ecx
  int *v9; // edi
  int *v10; // esi
  char *v11; // eax
  int *v12; // [esp+Ch] [ebp-1Ch] BYREF
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  int *v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  _DWORD *v18; // [esp+24h] [ebp-4h]
  int v19; // [esp+30h] [ebp+8h]

  v2 = this;
  v18 = this;
  if ( (a2 & 0x8C) != 0 )
  {
    v3 = 0;
    if ( !this[9] || this[9] != GetCurrentThreadId() )
    {
      if ( sub_100341E0() && *((_WORD *)v2 + 4) && !CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10)) )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)(v2 + 5));
        v2[9] = GetCurrentThreadId();
        v4 = (int *)sub_1001ACF0(v2 + 1);
        if ( v4 )
        {
          while ( 1 )
          {
            v5 = v4[1];
            v17 = *v4;
            v19 = v5;
            sub_1001AC40(v2 + 3, v4);
            v4 = (int *)v17;
            v6 = sub_1007A770(off_103DCD78, v19);
            if ( v6 )
            {
              if ( (*(_DWORD *)(v6 + 312) & 8) != 0 )
              {
                v7 = v3;
                if ( v3 + 1 > v13 )
                {
                  sub_1010AFF0(v3 - v13 + 1);
                  v3 = v15;
                }
                v8 = v12;
                v15 = ++v3;
                v16 = v12;
                if ( v3 - v7 - 1 > 0 )
                {
                  memcpy(&v12[v7 + 1], &v12[v7], 4 * (v3 - v7 - 1));
                  v8 = v12;
                }
                v9 = &v8[v7];
                if ( v9 )
                  *v9 = v19;
                v2 = v18;
              }
              else
              {
                sub_1008F150((float *)(v6 + 352));
              }
            }
            if ( !v17 )
            {
              v4 = (int *)sub_1001ACF0(v2 + 1);
              if ( !v4 )
                break;
            }
          }
          if ( v3 > 0 )
          {
            v10 = v12;
            do
            {
              sub_1008F2E0(v2 + 1, v10++);
              --v3;
            }
            while ( v3 );
          }
        }
        v2[9] = 0;
        CThreadSpinRWLock::UnlockWrite((CThreadSpinRWLock *)(v2 + 5));
        sub_1011A810(&v12);
      }
      if ( !CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10)) )
        CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)(v2 + 5));
      v11 = (char *)CThreadLocalBase::Get((CThreadLocalBase *)(v2 + 10));
      CThreadLocalBase::Set((CThreadLocalBase *)(v2 + 10), v11 + 1);
    }
  }
}
