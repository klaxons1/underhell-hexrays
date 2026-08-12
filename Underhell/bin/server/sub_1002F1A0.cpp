char __thiscall sub_1002F1A0(float *this)
{
  int v2; // edi
  int v3; // ecx
  int (__thiscall *v4)(float *); // eax
  float *v5; // ecx
  float *v7; // edi
  int v8; // [esp-4h] [ebp-10h]

  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( !v2 )
    goto LABEL_31;
  if ( *(_DWORD *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this) + 56) != *((_DWORD *)this + 611) )
    return 1;
  v3 = *(_DWORD *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this) + 56);
  v4 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 364);
  *((_DWORD *)this + 611) = v3;
  v8 = v4(this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
  if ( (unsigned __int8)sub_10077840(v8)
    || (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1080))(this, v2) != 1
    && (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1080))(this, v2) != 2
    || !(*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 1484))(this, v2) )
  {
    if ( *(_DWORD *)(dword_10690574 + 48) )
    {
      sub_10029660(this, (int)"ShouldChooseNewEnemy() --> true (1)\n");
      return 1;
    }
    return 1;
  }
  if ( sub_10023D10(this, 7) || sub_10023D10(this, 9) || sub_10023D10(this, 34) || sub_10023D10(this, 8) )
  {
    if ( *(_DWORD *)(dword_10690574 + 48) )
    {
      sub_10029660(this, (int)"ShouldChooseNewEnemy() --> true (2)\n");
      return 1;
    }
    return 1;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
  {
    v5 = this + 606;
    if ( *((_BYTE *)this + 2428) )
    {
      if ( sub_1001ED80(v5) )
      {
        if ( *(_DWORD *)(dword_10690574 + 48) )
        {
          sub_10029660(this, (int)"ShouldChooseNewEnemy() --> true (3)\n");
          return 1;
        }
        return 1;
      }
    }
    else
    {
      sub_1001EE20(v5);
    }
  }
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this);
  v7 = (float *)sub_100773C0(v2, 0);
  if ( sub_1001ED60(this + 610) )
  {
    this[610] = *(float *)(dword_106B31C8 + 12) + 1.5;
    if ( sub_10023D10(this, 35) )
      return 1;
    if ( !v7 )
    {
LABEL_31:
      if ( *(_DWORD *)(dword_10690574 + 48) )
        sub_10029660(this, (int)"ShouldChooseNewEnemy() --> true (4)\n");
      this[611] = *(float *)((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1868))(this) + 56);
      return 1;
    }
    if ( -3.402823466385289e38 == v7[12] || *(float *)(dword_106B31C8 + 12) - v7[7] > 10.0 )
      return 1;
  }
  if ( !v7 || *(float *)(dword_106B31C8 + 12) <= (double)v7[10] )
    goto LABEL_31;
  if ( *(_DWORD *)(dword_10690574 + 48) )
    sub_10029660(this, (int)"ShouldChooseNewEnemy() --> false\n");
  return 0;
}
