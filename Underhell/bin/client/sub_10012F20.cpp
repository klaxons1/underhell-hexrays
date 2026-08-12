char __thiscall sub_10012F20(float *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // edi
  bool v10; // bl
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int (__thiscall *v14)(float *); // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _BYTE v19[12]; // [esp+8h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)this;
  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 536))(this);
  v4 = (*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)this + 532))(this, v19, v3);
  (*(void (__thiscall **)(float *, int))(v2 + 804))(this, v4);
  v5 = *((_DWORD *)this + 1032);
  if ( v5 == -1 )
    goto LABEL_32;
  if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 2) != v5 >> 12 )
    goto LABEL_32;
  v6 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 1);
  if ( !v6 || !(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6) )
    goto LABEL_32;
  v7 = *((_DWORD *)this + 1032);
  if ( v7 != -1
    && *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 2) == v7 >> 12
    && (v8 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 1)) != 0 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 332))(v8);
  }
  else
  {
    v9 = 0;
  }
  v10 = sub_10012EB0(this);
  LOBYTE(v11) = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9);
  if ( (_BYTE)v11 )
    LOBYTE(v11) = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v9 + 28))(v9, this);
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 1032);
    if ( v11 != -1 )
    {
      v11 >>= 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 2) == v11 )
      {
        v12 = *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1032] & 0xFFF) + 1);
        if ( v12 )
        {
          v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 332))(v12);
          if ( v11 )
          {
LABEL_32:
            v13 = *((_DWORD *)this + 1034);
            if ( v13 == -1
              || (v11 = v13 >> 12, *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1034] & 0xFFF) + 2) != v11)
              || !*((_DWORD *)off_103DCD74 + 4 * ((_DWORD)this[1034] & 0xFFF) + 1) )
            {
              v14 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 788);
              if ( this[754] <= (double)*((float *)off_103DC81C + 3) )
              {
                v11 = v14(this);
                if ( v11 )
                {
                  if ( !sub_10012CD0(this) || (LOBYTE(v11) = sub_10012EB0(this), (_BYTE)v11) )
                  {
                    v16 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
                    LOBYTE(v11) = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 744))(v16);
                    if ( (_BYTE)v11 )
                    {
                      v17 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
                      LOBYTE(v11) = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 932))(v17);
                    }
                  }
                }
              }
              else
              {
                v11 = v14(this);
                if ( v11 )
                {
                  v15 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 788))(this);
                  LOBYTE(v11) = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 936))(v15);
                  this[1054] = 0.0;
                  return v11;
                }
              }
              this[1054] = 0.0;
            }
          }
        }
      }
    }
  }
  return v11;
}
