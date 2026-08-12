int __thiscall sub_103981B0(int this, int a2)
{
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // edx
  char v9; // al
  int v10; // [esp+8h] [ebp-20h]
  int v11; // [esp+18h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-Ch]
  int v13; // [esp+20h] [ebp-8h]
  bool v14; // [esp+27h] [ebp-1h]

  if ( sub_10295590((_BYTE *)(this + 5144)) )
    return a2;
  if ( *(_BYTE *)(this + 5600) )
  {
    v4 = *(_DWORD *)(dword_106EA2C4 + 48);
    if ( v4 == 1
      || v4 == 2 && (sub_100296A0((_DWORD *)this) || (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) == 3) )
    {
      v14 = sub_10395C40((_DWORD *)this);
      v12 = 0;
      if ( *(int *)(this + 4440) > 0 )
      {
        v13 = 0;
        do
        {
          v5 = (_DWORD *)(v13 + *(_DWORD *)(this + 4428));
          v6 = v5[3];
          v10 = v5[1];
          v8 = v5[5];
          v11 = v8;
          if ( a2 != *v5 )
            goto LABEL_26;
          if ( (v6 & 1) != 0 )
          {
            v7 = v5[4];
            if ( sub_103942C0(this) != v7 )
              goto LABEL_26;
          }
          if ( (v6 & 4) != 0 && BYTE1(v8) )
          {
            if ( !sub_100CF460((_DWORD *)this) )
              goto LABEL_26;
            if ( (v6 & 2) != 0 )
            {
              if ( v14 )
              {
                if ( !(_BYTE)v11 )
                  goto LABEL_26;
              }
              else if ( (_BYTE)v11 )
              {
                goto LABEL_26;
              }
            }
          }
          if ( (v6 & 8) == 0 )
            return v10;
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1088))(this);
          if ( BYTE2(v11) )
          {
            if ( v9 )
              return v10;
          }
          else if ( !v9 )
          {
            return v10;
          }
LABEL_26:
          v13 += 24;
          ++v12;
        }
        while ( v12 < *(_DWORD *)(this + 4440) );
      }
    }
  }
  return a2;
}
