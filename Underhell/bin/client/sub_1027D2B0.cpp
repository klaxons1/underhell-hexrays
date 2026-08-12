void __thiscall sub_1027D2B0(int *this)
{
  int v2; // ebx
  int *v3; // edi
  unsigned __int16 *v4; // ebp
  unsigned __int16 v5; // ax
  int v6; // ecx
  unsigned __int16 *v7; // [esp+10h] [ebp-1Ch]
  int v8; // [esp+14h] [ebp-18h]
  unsigned __int16 v9; // [esp+1Ch] [ebp-10h]
  int v10; // [esp+20h] [ebp-Ch]
  _BYTE v11[4]; // [esp+24h] [ebp-8h] BYREF
  _BYTE v12[4]; // [esp+28h] [ebp-4h] BYREF

  v2 = 0;
  v3 = this + 20;
  this[23] = 0;
  if ( *((_BYTE *)this + 76) && this[6] && (*(int (__thiscall **)(int *))(*this + 132))(this) )
  {
    v10 = (*(int (__thiscall **)(int *))(*this + 132))(this);
    (*(void (__thiscall **)(int *, _BYTE *, _BYTE *))(*this + 28))(this, v12, v11);
    v4 = (unsigned __int16 *)this[6];
    v5 = *v4;
    v6 = 0;
    v8 = 0;
    v7 = v4;
    if ( *v4 )
    {
      while ( 1 )
      {
        v9 = v5;
        switch ( v5 )
        {
          case 0xDu:
            goto LABEL_17;
          case 0xAu:
            *(_DWORD *)(*v3 + 4 * sub_10265590(v3, v3[3])) = (int)((double)(this[10] - v2) * 0.5);
            v2 = 0;
            goto LABEL_17;
          case 0x26u:
            if ( v4[1] != 38 )
              goto LABEL_17;
            v7 = ++v4;
            break;
        }
        if ( v6 != this[17] && v4 == *(unsigned __int16 **)(this[14] + 4 * v6) )
        {
          *(_DWORD *)(*v3 + 4 * sub_10265590(v3, v3[3])) = (int)((double)(this[10] - v2) * 0.5);
          v5 = v9;
          v4 = v7;
          v2 = 0;
          ++v8;
        }
        v2 += (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, v10, v5);
LABEL_17:
        v5 = v4[1];
        v7 = ++v4;
        if ( !v5 )
          break;
        v6 = v8;
      }
    }
    *(_DWORD *)(*v3 + 4 * sub_10265590(v3, v3[3])) = (int)((double)(this[10] - v2) * 0.5);
  }
}
