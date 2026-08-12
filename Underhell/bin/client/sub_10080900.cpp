void __thiscall sub_10080900(int this, int a2)
{
  int v2; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _WORD *v8; // edx
  int v9; // eax
  int v10; // [esp+10h] [ebp-4h]

  v2 = (unsigned __int16)a2;
  if ( (unsigned __int16)a2 < *(int *)(this + 36) && (unsigned int)(unsigned __int16)a2 <= *(_DWORD *)(this + 60) )
  {
    v4 = *(_DWORD *)(this + 32);
    v5 = 36 * (unsigned __int16)a2;
    v10 = v5;
    if ( *(unsigned __int16 *)(v4 + v5 + 32) != (unsigned __int16)a2
      || *(unsigned __int16 *)(v4 + v5 + 34) == (unsigned __int16)a2 )
    {
      *(_WORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + *(_DWORD *)(this + 32)) + 32))(*(_DWORD *)(v5 + *(_DWORD *)(this + 32))) = -1;
      if ( (*(_BYTE *)(v10 + *(_DWORD *)(this + 32) + 24) & 0x10) != 0 )
      {
        v6 = *(_DWORD *)(this + 356);
        v7 = 0;
        if ( v6 <= 0 )
        {
LABEL_11:
          v7 = -1;
        }
        else
        {
          v8 = *(_WORD **)(this + 344);
          while ( *v8 != (_WORD)a2 )
          {
            ++v7;
            ++v8;
            if ( v7 >= v6 )
            {
              v2 = (unsigned __int16)a2;
              goto LABEL_11;
            }
          }
          v2 = (unsigned __int16)a2;
        }
        if ( v6 > 0 )
          *(_WORD *)(*(_DWORD *)(this + 344) + 2 * v7) = *(_WORD *)(*(_DWORD *)(this + 344)
                                                                  + 2 * (*(_DWORD *)(this + 356))--
                                                                  - 2);
      }
      v9 = *(unsigned __int8 *)(v10 + *(_DWORD *)(this + 32) + 25);
      if ( v9 == 11 || v9 == 10 )
        sub_1007E120((_DWORD *)this, a2);
      sub_100805B0((_DWORD *)this, a2);
      sub_1007DBD0((_DWORD *)(this + 32), v2);
      *(_WORD *)(v10 + *(_DWORD *)(this + 32) + 34) = *(_WORD *)(this + 52);
      *(_DWORD *)(this + 52) = v2;
    }
  }
}
