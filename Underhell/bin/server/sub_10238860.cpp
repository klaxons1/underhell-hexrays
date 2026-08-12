char __thiscall sub_10238860(_DWORD *this, char *String1, char *String)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax

  if ( String1 == "preset" || !_stricmp(String1, "preset") )
  {
    this[203] = atoi(String);
    return 1;
  }
  if ( String1 == "pitch" || !_stricmp(String1, "pitch") )
  {
    v5 = atoi(String);
    this[204] = v5;
    if ( v5 > 255 )
      this[204] = 255;
    if ( (int)this[204] < 0 )
    {
      this[204] = 0;
      return 1;
    }
    return 1;
  }
  if ( String1 == "pitchstart" || !_stricmp(String1, "pitchstart") )
  {
    v6 = atoi(String);
    this[205] = v6;
    if ( v6 > 255 )
      this[205] = 255;
    if ( (int)this[205] < 0 )
    {
      this[205] = 0;
      return 1;
    }
    return 1;
  }
  if ( String1 == "spinup" || !_stricmp(String1, "spinup") )
  {
    v7 = atoi(String);
    this[206] = v7;
    if ( v7 > 100 )
      this[206] = 100;
    if ( (int)this[206] < 0 )
      this[206] = 0;
    v8 = this[206];
    if ( v8 > 0 )
      this[206] = (101 - v8) << 6;
    this[219] = this[206];
    return 1;
  }
  else if ( String1 == "spindown" || !_stricmp(String1, "spindown") )
  {
    v9 = atoi(String);
    this[207] = v9;
    if ( v9 > 100 )
      this[207] = 100;
    if ( (int)this[207] < 0 )
      this[207] = 0;
    v10 = this[207];
    if ( v10 > 0 )
      this[207] = (101 - v10) << 6;
    this[220] = this[207];
    return 1;
  }
  else if ( sub_10043F40(String1, "volstart") )
  {
    v11 = atoi(String);
    this[209] = v11;
    if ( v11 > 10 )
      this[209] = 10;
    if ( (int)this[209] < 0 )
      this[209] = 0;
    this[209] *= 10;
    return 1;
  }
  else if ( sub_10043F40(String1, "fadein") )
  {
    v12 = atoi(String);
    this[210] = v12;
    if ( v12 > 100 )
      this[210] = 100;
    if ( (int)this[210] < 0 )
      this[210] = 0;
    v13 = this[210];
    if ( v13 > 0 )
      this[210] = (101 - v13) << 6;
    this[223] = this[210];
    return 1;
  }
  else if ( sub_10043F40(String1, "fadeout") )
  {
    v14 = atoi(String);
    this[211] = v14;
    if ( v14 > 100 )
      this[211] = 100;
    if ( (int)this[211] < 0 )
      this[211] = 0;
    v15 = this[211];
    if ( v15 > 0 )
      this[211] = (101 - v15) << 6;
    this[224] = this[211];
    return 1;
  }
  else if ( sub_10043F40(String1, "fadeinsecs") )
  {
    v16 = atoi(String);
    this[210] = v16;
    if ( v16 > 100 )
      this[210] = 100;
    if ( (int)this[210] < 0 )
      this[210] = 0;
    v17 = this[210];
    if ( v17 > 0 )
      this[210] = 25600 / (5 * v17);
    this[223] = this[210];
    return 1;
  }
  else if ( sub_10043F40(String1, "fadeoutsecs") )
  {
    v18 = atoi(String);
    this[211] = v18;
    if ( v18 > 100 )
      this[211] = 100;
    if ( (int)this[211] < 0 )
      this[211] = 0;
    v19 = this[211];
    if ( v19 > 0 )
      this[211] = 25600 / (5 * v19);
    this[224] = this[211];
    return 1;
  }
  else
  {
    if ( sub_10043F40(String1, "lfotype") )
    {
      v20 = atoi(String);
      this[212] = v20;
      if ( v20 > 4 )
      {
        this[212] = 2;
        return 1;
      }
      return 1;
    }
    if ( sub_10043F40(String1, "lforate") )
    {
      v21 = atoi(String);
      this[213] = v21;
      if ( v21 > 1000 )
        this[213] = 1000;
      if ( (int)this[213] < 0 )
        this[213] = 0;
      this[213] <<= 8;
      return 1;
    }
    else
    {
      if ( sub_10043F40(String1, "lfomodpitch") )
      {
        v22 = atoi(String);
        this[214] = v22;
        if ( v22 > 100 )
          this[214] = 100;
        if ( (int)this[214] < 0 )
        {
          this[214] = 0;
          return 1;
        }
        return 1;
      }
      if ( sub_10043F40(String1, "lfomodvol") )
      {
        v23 = atoi(String);
        this[215] = v23;
        if ( v23 > 100 )
          this[215] = 100;
        if ( (int)this[215] < 0 )
        {
          this[215] = 0;
          return 1;
        }
        return 1;
      }
      if ( sub_10043F40(String1, "cspinup") )
      {
        v24 = atoi(String);
        this[216] = v24;
        if ( v24 > 100 )
          this[216] = 100;
        if ( (int)this[216] < 0 )
          this[216] = 0;
        return 1;
      }
      return sub_100D7750(this, String1, String);
    }
  }
}
