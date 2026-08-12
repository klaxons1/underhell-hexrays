void __thiscall sub_100418D0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // [esp-20h] [ebp-4Ch]
  char v11; // [esp-18h] [ebp-44h]
  int v12; // [esp-14h] [ebp-40h]
  int v13; // [esp-10h] [ebp-3Ch]
  char v14; // [esp-Ch] [ebp-38h]
  int v15; // [esp-8h] [ebp-34h]
  int v16; // [esp-4h] [ebp-30h]
  float v17[3]; // [esp+Ch] [ebp-20h] BYREF
  float v18[3]; // [esp+18h] [ebp-14h] BYREF
  int v19; // [esp+24h] [ebp-8h]
  int v20; // [esp+28h] [ebp-4h]
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 2484);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2484) & 0xFFF) + 1], v3[1] == v2 >> 12) && *v3 )
  {
    sub_10038D90((char *)this);
  }
  else if ( *(_DWORD *)(this + 2536) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      v5 = sub_100D7680(v4);
      v19 = v5;
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
        if ( (unsigned __int8)sub_103E0CF0(v6) )
        {
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
          sub_10019680((_DWORD *)(this + 2508), v7);
          sub_100306C0((_DWORD *)this);
        }
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1584))(this, 0) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1584))(v5, 0) )
          {
            v8 = 0;
            if ( *(int *)(this + 2536) > 0 )
            {
              v20 = 0;
              while ( 1 )
              {
                v9 = v20 + *(_DWORD *)(this + 2524);
                if ( *(_BYTE *)(v9 + 156) )
                {
                  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v9 + 160)
                    && sub_10030930(this, (int)&savedregs, v19, v9, v17, v18) )
                  {
                    break;
                  }
                }
                v20 += 164;
                if ( ++v8 >= *(_DWORD *)(this + 2536) )
                  return;
              }
              v14 = LOBYTE(v18[0]);
              v15 = LODWORD(v18[1]);
              v16 = LODWORD(v18[2]);
              v11 = LOBYTE(v17[0]);
              v12 = LODWORD(v17[1]);
              v13 = LODWORD(v17[2]);
              v10 = v19;
              *(_DWORD *)(this + 2520) = v8;
              sub_100385D0((char *)this, v10, v9, v11, v12, v13, v14, v15, v16);
            }
          }
        }
      }
    }
  }
}
