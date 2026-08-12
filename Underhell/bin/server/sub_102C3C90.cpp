int __thiscall sub_102C3C90(int this, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  int v4; // eax
  int *v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  int v11; // ebx
  int *v12; // ecx
  int v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  int v16; // edx
  int *v17; // ecx
  int *v18; // ecx
  int v19; // ecx
  int *v20; // eax
  int *v21; // ecx
  int *v22; // ecx
  int *v23; // ecx
  int v24; // ecx
  int *v25; // eax
  int result; // eax

  v2 = a2;
  if ( a2 != *(_WORD *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_106DE040;
      if ( (dword_106DE040 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 = dword_106DE040 | 1;
        dword_106DE040 |= 1u;
      }
      if ( v2 == 0xFFFF )
        v5 = &dword_106DE038;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 392 * v2);
      v6 = *((unsigned __int16 *)v5 + 2);
      if ( (v4 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 |= 1u;
        dword_106DE040 = v4;
      }
      if ( (_WORD)v6 == 0xFFFF )
        v7 = &dword_106DE038;
      else
        v7 = (int *)(*(_DWORD *)(this + 4) + 392 * v6);
      if ( *((_WORD *)v7 + 3) )
        break;
      if ( (v4 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 |= 1u;
        dword_106DE040 = v4;
      }
      if ( v2 == 0xFFFF )
        v8 = &dword_106DE038;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 392 * v2);
      v9 = *((unsigned __int16 *)v8 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE040 = v4;
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
      }
      if ( (_WORD)v9 == 0xFFFF )
        v10 = &dword_106DE038;
      else
        v10 = (int *)(*(_DWORD *)(this + 4) + 392 * v9);
      v11 = *((unsigned __int16 *)v10 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106DE040 = v4;
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
      }
      if ( (_WORD)v9 == 0xFFFF )
        v12 = &dword_106DE038;
      else
        v12 = (int *)(*(_DWORD *)(this + 4) + 392 * v9);
      v13 = *((unsigned __int16 *)v12 + 2);
      if ( (v4 & 1) == 0 )
      {
        dword_106DE038 = -1;
        dword_106DE03C = 0x1FFFF;
        v4 |= 1u;
        dword_106DE040 = v4;
      }
      if ( (_WORD)v13 == 0xFFFF )
        v14 = &dword_106DE038;
      else
        v14 = (int *)(*(_DWORD *)(this + 4) + 392 * v13);
      if ( *(_WORD *)v14 == (_WORD)v9 )
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106DE040 = v4;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( (_WORD)v11 == 0xFFFF )
          v15 = &dword_106DE038;
        else
          v15 = (int *)(*(_DWORD *)(this + 4) + 392 * v11);
        v16 = *((unsigned __int16 *)v15 + 1);
        if ( (v4 & 1) == 0 )
        {
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
          v4 |= 1u;
          dword_106DE040 = v4;
        }
        if ( (_WORD)v16 == 0xFFFF )
          v17 = &dword_106DE038;
        else
          v17 = (int *)(*(_DWORD *)(this + 4) + 392 * v16);
        if ( !*((_WORD *)v17 + 3) )
          goto LABEL_71;
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106DE040 = v4;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v18 = &dword_106DE038;
        else
          v18 = (int *)(*(_DWORD *)(this + 4) + 392 * a2);
        v19 = *((unsigned __int16 *)v18 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_106DE040 = v4 | 1;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( (_WORD)v19 == 0xFFFF )
          v20 = &dword_106DE038;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 392 * v19);
        if ( *((_WORD *)v20 + 1) == a2 )
        {
          a2 = v9;
          sub_102C1B50(this, v9);
          LOWORD(v9) = sub_102C0970((_DWORD *)this, v9);
          LOWORD(v11) = sub_102C0970((_DWORD *)this, v9);
        }
        *(_WORD *)(392 * (unsigned __int16)v9 + *(_DWORD *)(this + 4) + 6) = 1;
        *(_WORD *)(392 * (unsigned __int16)v11 + *(_DWORD *)(this + 4) + 6) = 0;
        sub_102C1C60(this, v11);
      }
      else
      {
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106DE040 = v4;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( (_WORD)v11 == 0xFFFF )
          v21 = &dword_106DE038;
        else
          v21 = (int *)(*(_DWORD *)(this + 4) + 392 * v11);
        v16 = *(unsigned __int16 *)v21;
        if ( (v4 & 1) == 0 )
        {
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
          v4 |= 1u;
          dword_106DE040 = v4;
        }
        if ( (_WORD)v16 == 0xFFFF )
          v22 = &dword_106DE038;
        else
          v22 = (int *)(*(_DWORD *)(this + 4) + 392 * v16);
        if ( !*((_WORD *)v22 + 3) )
        {
LABEL_71:
          *(_WORD *)(392 * v9 + *(_DWORD *)(this + 4) + 6) = 1;
          *(_WORD *)(392 * v16 + *(_DWORD *)(this + 4) + 6) = 1;
          *(_WORD *)(392 * v11 + *(_DWORD *)(this + 4) + 6) = 0;
          a2 = v11;
          goto LABEL_85;
        }
        if ( (v4 & 1) == 0 )
        {
          v4 |= 1u;
          dword_106DE040 = v4;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( a2 == 0xFFFF )
          v23 = &dword_106DE038;
        else
          v23 = (int *)(*(_DWORD *)(this + 4) + 392 * a2);
        v24 = *((unsigned __int16 *)v23 + 2);
        if ( (v4 & 1) == 0 )
        {
          dword_106DE040 = v4 | 1;
          dword_106DE038 = -1;
          dword_106DE03C = 0x1FFFF;
        }
        if ( (_WORD)v24 == 0xFFFF )
          v25 = &dword_106DE038;
        else
          v25 = (int *)(*(_DWORD *)(this + 4) + 392 * v24);
        if ( *(_WORD *)v25 == a2 )
        {
          a2 = v9;
          sub_102C1C60(this, v9);
          LOWORD(v9) = sub_102C0970((_DWORD *)this, v9);
          LOWORD(v11) = sub_102C0970((_DWORD *)this, v9);
        }
        *(_WORD *)(392 * (unsigned __int16)v9 + *(_DWORD *)(this + 4) + 6) = 1;
        *(_WORD *)(392 * (unsigned __int16)v11 + *(_DWORD *)(this + 4) + 6) = 0;
        sub_102C1B50(this, v11);
      }
LABEL_85:
      if ( a2 == *(_WORD *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 392 * *(unsigned __int16 *)(this + 16);
  *(_WORD *)(result + *(_DWORD *)(this + 4) + 6) = 1;
  return result;
}
