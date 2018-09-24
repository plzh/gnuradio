/* -*- c++ -*- */
/*
 * Copyright 2004,2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_ANALOG_SIG_SOURCE_WAVEFORM_H
#define INCLUDED_ANALOG_SIG_SOURCE_WAVEFORM_H

namespace gr {
  namespace analog {

    /*!
     * \brief Types of signal generator waveforms.
     * \ingroup waveform_generators_blk
     */
    typedef enum {
      GR_CONST_WAVE = 100,
      GR_SIN_WAVE,
      GR_COS_WAVE,
      GR_SQR_WAVE,
      GR_TRI_WAVE,
      GR_SAW_WAVE
    } gr_waveform_t;

  } /* namespace analog */
} /* namespace gr */

#endif /* INCLUDED_ANALOG_SIG_SOURCE_WAVEFORM_H */
